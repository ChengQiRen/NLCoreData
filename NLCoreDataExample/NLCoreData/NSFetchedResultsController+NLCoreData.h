//
//  NSFetchedResultsController+NLCoreData.h
//
//  Created by Jesper Skrufve <jesper@neolo.gy>
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to
//  deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
//  sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
//  

#import <CoreData/CoreData.h>

@interface NSFetchedResultsController (NLCoreData)

/**
 @name Lifecycle
 Returns a NSFetchedResultsController set to the shared context for current thread.
 @param fetchRequest The fetch request used to get the objects.
 @return The NSFetchedResultsController.
 */
- (id)initWithFetchRequest:(NSFetchRequest *)fetchRequest;

/**
 @name Lifecycle
 Returns a NSFetchedResultsController set to the shared context for current thread.
 @param fetchRequest The fetch request used to get the objects.
 @param name The name of the cache file the receiver should use. Pass nil to prevent caching.
 @return The NSFetchedResultsController.
 */
- (id)initWithFetchRequest:(NSFetchRequest *)fetchRequest cacheName:(NSString *)name;

/**
 @name Lifecycle
 Returns a NSFetchedResultsController set to the shared context.
 @param fetchRequest The fetch request used to get the objects.
 @param The key path on the fetched objects used to determine the section they belong to.
 @param name The name of the cache file the receiver should use. Pass nil to prevent caching.
 @return The NSFetchedResultsController.
 */
- (id)initWithFetchRequest:(NSFetchRequest *)fetchRequest
		sectionNameKeyPath:(NSString *)sectionNameKeyPath
				 cacheName:(NSString *)name;

/**
 @name Lifecycle
 Returns a NSFetchedResultsController.
 @param fetchRequest The fetch request used to get the objects.
 @param context The context against which fetchRequest is executed.
 @return The NSFetchedResultsController.
 */
- (id)initWithFetchRequest:(NSFetchRequest *)fetchRequest managedObjectContext:(NSManagedObjectContext *)context;

/**
 @name Lifecycle
 Returns a NSFetchedResultsController.
 @param fetchRequest The fetch request used to get the objects.
 @param context The context against which fetchRequest is executed.
 @param name The name of the cache file the receiver should use. Pass nil to prevent caching.
 @return The NSFetchedResultsController.
 */
- (id)initWithFetchRequest:(NSFetchRequest *)fetchRequest
	  managedObjectContext:(NSManagedObjectContext *)context
				 cacheName:(NSString *)name;

@end
