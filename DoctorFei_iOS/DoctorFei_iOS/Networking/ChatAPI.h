//
//  ChatAPI.h
//  DoctorFei_iOS
//
//  Created by GuJunjia on 14/12/5.
//
//

#import "BaseHTTPRequestOperationManager.h"

@interface ChatAPI : BaseHTTPRequestOperationManager
+ (void)getChatWithParameters: (id)parameters success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;
+ (void)sendMessageWithParameters: (id)parameters success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

@end
