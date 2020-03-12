# Requisites
## Functionals
### Commitment
* Complex requests: the injector should be able to send traffic with complex
requests. For example:
```
SEND {"user": "nien", pass: "nein"}
RECEIVE {"token": "33edfvgy78ijm,l098uJMNBVFe45t", "status": 200}
SEND {"action": "do-this", "authorized": {"token": "33edfvgy78ijm,l098uJMNBVFe45t"}, "status": 200}
RECEIVE {"status": "wrong action, you casul", "status": 500}
```
* Configuration based load with DSL
* Metric integration with other services like Prometheus
* Auto-load regulation based on specified traffic: based on the performance
gained during the traffic load, the injector should increase or decrease
the load so it matches the specified configuration

### Stretch
* Distributed: the injector should be able to be run in
separated instances, so it can inject greater traffic

## Non functional
* Parallel & concurrent/asynchronous requests