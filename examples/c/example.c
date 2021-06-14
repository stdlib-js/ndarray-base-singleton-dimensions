/**
* @license Apache-2.0
*
* Copyright (c) 2020 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/ndarray/base/singleton_dimensions.h"
#include <stdio.h>

int main() {
	int64_t shape[] = { 10, 3, 1, 1, 5 };

	int64_t n = stdlib_ndarray_singleton_dimensions( 5, shape );
	printf( "shape: %llux%llux%llux%llux%llu. singleton dimensions: %llu\n", shape[ 0 ], shape[ 1 ], shape[ 2 ], shape[ 3 ], shape[ 4 ], n );
}
