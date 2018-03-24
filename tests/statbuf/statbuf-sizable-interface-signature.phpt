--TEST--
Test that the Stream\StatBuf\Sizable interface exists and has correct method signatures
--FILE--
<?php
var_dump(interface_exists(\Stream\StatBuf\Sizable::class));
\ReflectionClass::export(\Stream\StatBuf\Sizable::class);
--EXPECTF--
bool(true)
Interface [ <internal:streams2> interface Stream\StatBuf\Sizable ] {

  - Constants [0] {
  }

  - Static properties [0] {
  }

  - Static methods [0] {
  }

  - Properties [0] {
  }

  - Methods [1] {
    Method [ <internal:streams2> abstract public method getSize ] {

      - Parameters [0] {
      }
      - Return [ int%S ]
    }
  }
}
