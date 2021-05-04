﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/model/OriginCustomHeader.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

OriginCustomHeader::OriginCustomHeader() : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
}

OriginCustomHeader::OriginCustomHeader(const XmlNode& xmlNode) : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
  *this = xmlNode;
}

OriginCustomHeader& OriginCustomHeader::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode headerNameNode = resultNode.FirstChild("HeaderName");
    if(!headerNameNode.IsNull())
    {
      m_headerName = StringUtils::Trim(headerNameNode.GetText().c_str());
      m_headerNameHasBeenSet = true;
    }
    XmlNode headerValueNode = resultNode.FirstChild("HeaderValue");
    if(!headerValueNode.IsNull())
    {
      m_headerValue = StringUtils::Trim(headerValueNode.GetText().c_str());
      m_headerValueHasBeenSet = true;
    }
  }

  return *this;
}

void OriginCustomHeader::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_headerNameHasBeenSet)
  {
   XmlNode headerNameNode = parentNode.CreateChildElement("HeaderName");
   headerNameNode.SetText(m_headerName);
  }

  if(m_headerValueHasBeenSet)
  {
   XmlNode headerValueNode = parentNode.CreateChildElement("HeaderValue");
   headerValueNode.SetText(m_headerValue);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
