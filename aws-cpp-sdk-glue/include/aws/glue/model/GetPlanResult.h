﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API GetPlanResult
  {
  public:
    GetPlanResult();
    GetPlanResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetPlanResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A python script to perform the mapping.</p>
     */
    inline const Aws::String& GetPythonScript() const{ return m_pythonScript; }

    /**
     * <p>A python script to perform the mapping.</p>
     */
    inline void SetPythonScript(const Aws::String& value) { m_pythonScript = value; }

    /**
     * <p>A python script to perform the mapping.</p>
     */
    inline void SetPythonScript(Aws::String&& value) { m_pythonScript = std::move(value); }

    /**
     * <p>A python script to perform the mapping.</p>
     */
    inline void SetPythonScript(const char* value) { m_pythonScript.assign(value); }

    /**
     * <p>A python script to perform the mapping.</p>
     */
    inline GetPlanResult& WithPythonScript(const Aws::String& value) { SetPythonScript(value); return *this;}

    /**
     * <p>A python script to perform the mapping.</p>
     */
    inline GetPlanResult& WithPythonScript(Aws::String&& value) { SetPythonScript(std::move(value)); return *this;}

    /**
     * <p>A python script to perform the mapping.</p>
     */
    inline GetPlanResult& WithPythonScript(const char* value) { SetPythonScript(value); return *this;}

  private:
    Aws::String m_pythonScript;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
