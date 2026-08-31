#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051FA7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051FA7C;

loc_8051FA7C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r6 = 0;
    r3 = MemoryInline::FlatRead16((r5 + 6));
    r0 = (r3 & 2304);
}

loc_8051FA8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FA94;
    }
}

loc_8051FA90:
{
    r6 = (r6 | 1);
}

loc_8051FA94:
{
    r0 = (r3 & 1536);
}

loc_8051FA98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FAA4;
    }
}

loc_8051FA9C:
{
    r0 = (r6 | 2);
    r6 = (r0 & 65535);
}

loc_8051FAA4:
{
    r0 = (r3 & 16);
}

loc_8051FAA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FAB4;
    }
}

loc_8051FAAC:
{
    r0 = (r6 | 4);
    r6 = (r0 & 65535);
}

loc_8051FAB4:
{
    r0 = (r3 & 8);
}

loc_8051FAB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FAC4;
    }
}

loc_8051FABC:
{
    r0 = (r6 | 8);
    r6 = (r0 & 65535);
}

loc_8051FAC4:
{
    r0 = (r3 & 4);
}

loc_8051FAC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FAD4;
    }
}

loc_8051FACC:
{
    r0 = (r6 | 16);
    r6 = (r0 & 65535);
}

loc_8051FAD4:
{
    r0 = (r3 & 1);
}

loc_8051FAD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FAE4;
    }
}

loc_8051FADC:
{
    r0 = (r6 | 32);
    r6 = (r0 & 65535);
}

loc_8051FAE4:
{
    r0 = (r3 & 2);
}

loc_8051FAE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FAF4;
    }
}

loc_8051FAEC:
{
    r0 = (r6 | 64);
    r6 = (r0 & 65535);
}

loc_8051FAF4:
{
    r0 = (r3 & 32768);
}

loc_8051FAF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FB04;
    }
}

loc_8051FAFC:
{
    r0 = (r6 | 128);
    r6 = (r0 & 65535);
}

loc_8051FB04:
{
    r0 = (r3 & 20480);
}

loc_8051FB08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051FB14;
    }
}

loc_8051FB0C:
{
    r0 = (r6 | 256);
    r6 = (r0 & 65535);
}

loc_8051FB14:
{
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r6));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead16((r5 + 6));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    r6 = MemoryInline::FlatRead8((r5 + 16));
    MemoryInline::FlatWrite8((r4 + 24), static_cast<uint8_t>(r6));
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r0 = MemoryInline::FlatRead8((r3 + 16725));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051FB38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051FB70;
    }
}

loc_8051FB3C:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r6 = 0x80890000u;
    r3 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f2.d = MemoryInline::FlatReadFloat64((r6 + -816));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + -824));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = (-(f0.d));
    goto loc_8051FB9C;
}

loc_8051FB70:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r6 = 0x80890000u;
    r3 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f2.d = MemoryInline::FlatReadFloat64((r6 + -816));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + -824));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
}

loc_8051FB9C:
{
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r0 = 1127219200;
    r6 = 0x80890000u;
    r3 = 0x80890000u;
    r5 = MemoryInline::FlatRead8((r5 + 17));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f2.d = MemoryInline::FlatReadFloat64((r6 + -816));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + -824));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWrite8((r4 + 25), static_cast<uint8_t>(r5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000006B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051FA7C func_8051FA7C preserves=true fpr_mask=0x00000000
