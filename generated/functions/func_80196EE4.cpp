#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80196EE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80196EE4;

loc_80196EE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_80196EF0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80196F80;
    }
}

loc_80196F0C:
{
    r0 = (0 - r4);
}

loc_80196F14:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r6))) {
        goto loc_80196F24;
    }
}

loc_80196F18:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_80196F70;
}

loc_80196F24:
{
}

loc_80196F28:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r7))) {
        goto loc_80196F38;
    }
}

loc_80196F2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_80196F70;
}

loc_80196F38:
{
    r4 = (r4 + r6);
    r0 = (r7 - r6);
    r4 = (0 - r4);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r4 = (r4 ^ -2147483648);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_80196F70:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_80196FDC;
}

loc_80196F80:
{
}

loc_80196F84:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r6))) {
        goto loc_80196F94;
    }
}

loc_80196F88:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_80196FDC;
}

loc_80196F94:
{
}

loc_80196F98:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r7))) {
        goto loc_80196FA8;
    }
}

loc_80196F9C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_80196FDC;
}

loc_80196FA8:
{
    r4 = (r4 - r6);
    r0 = (r7 - r6);
    r4 = (r4 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_80196FDC:
{
}

loc_80196FE0:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80197058;
    }
}

loc_80196FE4:
{
    r0 = (0 - r5);
}

loc_80196FEC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r6))) {
        goto loc_80196FFC;
    }
}

loc_80196FF0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_80197048;
}

loc_80196FFC:
{
}

loc_80197000:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r7))) {
        goto loc_80197010;
    }
}

loc_80197004:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_80197048;
}

loc_80197010:
{
    r4 = (r5 + r6);
    r0 = (r7 - r6);
    r4 = (0 - r4);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r4 = (r4 ^ -2147483648);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
}

loc_80197048:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_801970B4;
}

loc_80197058:
{
}

loc_8019705C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r6))) {
        goto loc_8019706C;
    }
}

loc_80197060:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_801970B4;
}

loc_8019706C:
{
}

loc_80197070:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r7))) {
        goto loc_80197080;
    }
}

loc_80197074:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    goto loc_801970B4;
}

loc_80197080:
{
    r4 = (r5 - r6);
    r0 = (r7 - r6);
    r4 = (r4 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
}

loc_801970B4:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801970D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801970F4;
    }
}

loc_801970D4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
}

loc_801970F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80003FFF gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80196EE4 func_80196EE4 preserves=true fpr_mask=0x00000000
