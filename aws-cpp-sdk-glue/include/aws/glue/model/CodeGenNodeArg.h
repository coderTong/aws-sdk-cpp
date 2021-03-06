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

  /**
   * <p>An argument or property of a node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CodeGenNodeArg">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API CodeGenNodeArg
  {
  public:
    CodeGenNodeArg();
    CodeGenNodeArg(const Aws::Utils::Json::JsonValue& jsonValue);
    CodeGenNodeArg& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the argument or property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the argument or property.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the argument or property.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the argument or property.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the argument or property.</p>
     */
    inline CodeGenNodeArg& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the argument or property.</p>
     */
    inline CodeGenNodeArg& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the argument or property.</p>
     */
    inline CodeGenNodeArg& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The value of the argument or property.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the argument or property.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the argument or property.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the argument or property.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the argument or property.</p>
     */
    inline CodeGenNodeArg& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the argument or property.</p>
     */
    inline CodeGenNodeArg& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the argument or property.</p>
     */
    inline CodeGenNodeArg& WithValue(const char* value) { SetValue(value); return *this;}

    /**
     * <p>True if the value is used as a parameter.</p>
     */
    inline bool GetParam() const{ return m_param; }

    /**
     * <p>True if the value is used as a parameter.</p>
     */
    inline void SetParam(bool value) { m_paramHasBeenSet = true; m_param = value; }

    /**
     * <p>True if the value is used as a parameter.</p>
     */
    inline CodeGenNodeArg& WithParam(bool value) { SetParam(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
    bool m_param;
    bool m_paramHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
