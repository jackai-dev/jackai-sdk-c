# JackAI Platform OS Hub API (public subset) C API

<!-- omniwrap-api-reference eyJjb250cmFjdF9maW5nZXJwcmludCI6ImM3Y2E1ZTVlYmI0YzA5MjkxMGVjNzJiMzcxZTE4ODMwMzM1OGM1ZTM0ZDI5MDhjMGE4OGY3ODJhMjQxMTYyY2YiLCJvcGVyYXRpb25fY291bnQiOjgsInJlbmRlcmVyIjoiYyIsInZlcnNpb24iOiIxLjUuMCJ9 -->

This generated index is tied to Semantic IR `1.14.0` and contract fingerprint `c7ca5e5ebb4c092910ec72b371e188303358c5e34d2908c0a88f782a241162cf`. Every operation below is rendered from the same semantic contract and artifact-attested public member allocation as the SDK.

SDK maturity: **experimental**  
Artifact evidence: [`omniwrap-artifact.json`](omniwrap-artifact.json) binds this file by SHA-256 and is revalidated by the package gate.

## Resource `health`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJvbW5pd3JhcF9nZXRfaGVhbHRoIiwibWV0aG9kIjoiR0VUIiwib3BlcmF0aW9uX2lkIjoiZ2V0SGVhbHRoIiwicGF0aCI6Ii9oZWFsdGgiLCJyZXNvdXJjZSI6ImhlYWx0aCIsInNlY3Rpb25fc2hhMjU2IjoiNTNhYzU4MzZkYjQ3Nzk0MjNiYWRmMDg1ODllMGRhOWVkMTRmZTFmNWNjOGMyOTE1ZTM3ZjA1YTUxMGEyODA2MSIsInNpZ25hdHVyZV9zaGEyNTYiOiIyYWM5YjkwNDk0NjBiYWY1ZWJlODVjNDgzOWYyNTQ1ZDIxNzU2NTMyODFlODEzN2ViZTVmMzc2ZWI1ZDMwZDUxIn0 -->
### `client.omniwrap_get_health`

Operation ID: `getHealth`  
Route: `GET` `/health`  

#### Signature

```c
int omniwrap_get_health(omniwrap_client_t *client, omniwrap_response_t *out_response)
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Hub liveness status | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRIZWFsdGgifQ -->

## Resource `kernel`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJvbW5pd3JhcF9mYWlsX3VzYWdlX3F1b3RhIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6ImZhaWxVc2FnZVF1b3RhIiwicGF0aCI6Ii92MS9rZXJuZWwvdXNhZ2UvZmFpbCIsInJlc291cmNlIjoia2VybmVsIiwic2VjdGlvbl9zaGEyNTYiOiJlOTUyZDFlZDk4M2IzZjViOGQ2ZDRiMzg3ZDE2OGVlZGZhNmYwZDM4ZGViN2QwZTI0Njk1Y2IxMGYyOTM1ZTQwIiwic2lnbmF0dXJlX3NoYTI1NiI6IjUwMTFhN2NhYzNjOTUyYWZkNDliY2I4ODc2OTcwZmE3NmNmYzBiOWUzN2ZmZDJmOWFkMzExNzI0NTFmNGE0MWQifQ -->
### `client.omniwrap_fail_usage_quota`

Operation ID: `failUsageQuota`  
Route: `POST` `/v1/kernel/usage/fail`  

#### Signature

```c
int omniwrap_fail_usage_quota(omniwrap_client_t *client, omniwrap_response_t *out_response)
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Reservation released | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJmYWlsVXNhZ2VRdW90YSJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJvbW5pd3JhcF9maW5hbGl6ZV91c2FnZV9xdW90YSIsIm1ldGhvZCI6IlBPU1QiLCJvcGVyYXRpb25faWQiOiJmaW5hbGl6ZVVzYWdlUXVvdGEiLCJwYXRoIjoiL3YxL2tlcm5lbC91c2FnZS9maW5hbGl6ZSIsInJlc291cmNlIjoia2VybmVsIiwic2VjdGlvbl9zaGEyNTYiOiJkOGUxOTgzYjFmNzRkMmE0M2Y4NmM0YzM2ZjY5M2I0ZDJlZGQ3N2NmN2UyNDMzNjU4MjM1NDVkYTEwZWFhNzM4Iiwic2lnbmF0dXJlX3NoYTI1NiI6IjE2YWQ4NTliOTMwMzM4NGU4M2FjODQ5MDUyYTBlZTYzYWY3YTQ4NWZjMmU1ODkwNTcxNGIyMTlkYWY0MDk4NGMifQ -->
### `client.omniwrap_finalize_usage_quota`

Operation ID: `finalizeUsageQuota`  
Route: `POST` `/v1/kernel/usage/finalize`  

#### Signature

```c
int omniwrap_finalize_usage_quota(omniwrap_client_t *client, omniwrap_response_t *out_response)
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Reservation finalized | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJmaW5hbGl6ZVVzYWdlUXVvdGEifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJvbW5pd3JhcF9yZXNlcnZlX3VzYWdlX3F1b3RhIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6InJlc2VydmVVc2FnZVF1b3RhIiwicGF0aCI6Ii92MS9rZXJuZWwvdXNhZ2UvcmVzZXJ2ZSIsInJlc291cmNlIjoia2VybmVsIiwic2VjdGlvbl9zaGEyNTYiOiI2MGEwM2VhNzJiMDQ0NmIxZGE1YWM0ZWVlN2I4NzQyNmUxYmFmOGQyN2FkYjAzZjVkNmY0N2M1YTEzYzVkMzg1Iiwic2lnbmF0dXJlX3NoYTI1NiI6ImVjNWMzMDVlMDZkMzRiOTM5NTI1Mzg0ZmM2ZTVkMGZlYmUyODIyYTRlZTIxZjBmMjFmZDQ0NTZmYmJiMDk0NjQifQ -->
### `client.omniwrap_reserve_usage_quota`

Operation ID: `reserveUsageQuota`  
Route: `POST` `/v1/kernel/usage/reserve`  

#### Signature

```c
int omniwrap_reserve_usage_quota(omniwrap_client_t *client, omniwrap_response_t *out_response)
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Reservation lease created | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJyZXNlcnZlVXNhZ2VRdW90YSJ9 -->

## Resource `user`

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJvbW5pd3JhcF9nZXRfY3VycmVudF91c2VyIiwibWV0aG9kIjoiR0VUIiwib3BlcmF0aW9uX2lkIjoiZ2V0Q3VycmVudFVzZXIiLCJwYXRoIjoiL3VzZXIvbWUiLCJyZXNvdXJjZSI6InVzZXIiLCJzZWN0aW9uX3NoYTI1NiI6ImQ0OWJkM2I3ZGY2ZDhmYjg2ZmFmZmNiYmZjYjFkNWM3NjAwODI5ZWVmODBkOTkzNjAyM2JkNjQ3MjllMWJkNGIiLCJzaWduYXR1cmVfc2hhMjU2IjoiMTBkZWQ1ZGZmODg4MTY5MDJiMjc5MGU1YzIyNDhiYWZhZWY1Y2IxYWNiNGMxMTZjNDUxMDg5MWRlODg4NzE4YyJ9 -->
### `client.omniwrap_get_current_user`

Operation ID: `getCurrentUser`  
Route: `GET` `/user/me`  

#### Signature

```c
int omniwrap_get_current_user(omniwrap_client_t *client, omniwrap_response_t *out_response)
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Current user context | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRDdXJyZW50VXNlciJ9 -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJvbW5pd3JhcF9nZXRfc2lnbnVwX3BvbGljeSIsIm1ldGhvZCI6IkdFVCIsIm9wZXJhdGlvbl9pZCI6ImdldFNpZ251cFBvbGljeSIsInBhdGgiOiIvdXNlci9hdXRoL3NpZ251cC1wb2xpY3kiLCJyZXNvdXJjZSI6InVzZXIiLCJzZWN0aW9uX3NoYTI1NiI6IjRkOWE3Mjk4MDYyNTNjZmVlOWZiNGI4MmE5ZjUyZWE1MGJkYmQ3MzRkNzU3ZDc2ZGI3ZTdlZmE5NWFkYmJjMDEiLCJzaWduYXR1cmVfc2hhMjU2IjoiMmFmNmNmMjFiMWMzZWMxNDQ3NjVlYWU0MDNiNjczN2RmMzg4MGQ0MTg5Nzc0OTYxNmQ5YjkzN2M1NjQyMDZlOSJ9 -->
### `client.omniwrap_get_signup_policy`

Operation ID: `getSignupPolicy`  
Route: `GET` `/user/auth/signup-policy`  

#### Signature

```c
int omniwrap_get_signup_policy(omniwrap_client_t *client, omniwrap_response_t *out_response)
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Current signup policy | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJnZXRTaWdudXBQb2xpY3kifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJvbW5pd3JhcF9sb2dpbl91c2VyIiwibWV0aG9kIjoiUE9TVCIsIm9wZXJhdGlvbl9pZCI6ImxvZ2luVXNlciIsInBhdGgiOiIvdXNlci9hdXRoL2xvZ2luIiwicmVzb3VyY2UiOiJ1c2VyIiwic2VjdGlvbl9zaGEyNTYiOiI5ZmJiZjlhZDA3Y2I5NTI5Nzg5ZTM1NjNkYjc3YzAxM2M3MDlhZjk5ZDQwOTNiODU4ZTFmYjc2YjFmZjEyM2RhIiwic2lnbmF0dXJlX3NoYTI1NiI6ImU4MmM5ZmUyYTJkZGZlYjljOTYyMDgxYWNjMWVjMTFjZDc4YTMzNWJlMjZiMGYyNzRkYTNiODcyM2ExZmE3ZjEifQ -->
### `client.omniwrap_login_user`

Operation ID: `loginUser`  
Route: `POST` `/user/auth/login`  

#### Signature

```c
int omniwrap_login_user(omniwrap_client_t *client, omniwrap_response_t *out_response)
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `200` | Authenticated session or MFA challenge | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJsb2dpblVzZXIifQ -->

<!-- omniwrap-api-operation eyJleGFtcGxlX3JlYXNvbiI6Imxhbmd1YWdlLWV4YW1wbGUtbm90LWdlbmVyYXRlZCIsImV4YW1wbGVfc3RhdHVzIjoidW5zdXBwb3J0ZWQiLCJtZW1iZXIiOiJvbW5pd3JhcF9zdWJtaXRfd2FpdGxpc3RfcmVxdWVzdCIsIm1ldGhvZCI6IlBPU1QiLCJvcGVyYXRpb25faWQiOiJzdWJtaXRXYWl0bGlzdFJlcXVlc3QiLCJwYXRoIjoiL3VzZXIvYXV0aC93YWl0bGlzdCIsInJlc291cmNlIjoidXNlciIsInNlY3Rpb25fc2hhMjU2IjoiYmEyZDljMjM2NmM1MGUyOTZhOGZkZTYwNWU2ZjdiZGFiMGMyNGI0MWZiZTQ0MDQ4NzVjOWUwMDQ4MzNkZjY5NiIsInNpZ25hdHVyZV9zaGEyNTYiOiJmMGYwMTBhZWMwMGM2ZThiMDk0MTEyNDliOWNhZDQ1Y2Y5NTE2NmIxOWE5NTFhYmMyODMzNmMxMjdkMWU0NjZkIn0 -->
### `client.omniwrap_submit_waitlist_request`

Operation ID: `submitWaitlistRequest`  
Route: `POST` `/user/auth/waitlist`  

#### Signature

```c
int omniwrap_submit_waitlist_request(omniwrap_client_t *client, omniwrap_response_t *out_response)
```

#### Parameters

| Name | In | Required | Contract type | Description |
| --- | --- | --- | --- | --- |
| _none_ | | | | |

#### Responses

| Status | Description | Content |
| --- | --- | --- |
| `202` | Waitlist request recorded with an opaque WL- reference | none |

#### Canonical required-input example

```json
{
  "parameters": []
}
```

#### SDK call example

Example status: `unsupported`  
Unsupported reason: `language-example-not-generated`

<!-- omniwrap-api-operation-end eyJvcGVyYXRpb25faWQiOiJzdWJtaXRXYWl0bGlzdFJlcXVlc3QifQ -->

