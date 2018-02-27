//
//  setup.h
//  libsignal-protocol-swift iOS
//
//  Created by User on 15.02.18.
//  Copyright © 2018 User. All rights reserved.
//

#ifndef setup_h
#define setup_h

#include "signal_protocol.h"

void *signal_setup(void);

void signal_destroy(void *global_context);

int setup_crypto_provider(signal_context *context);

#endif /* setup_h */
