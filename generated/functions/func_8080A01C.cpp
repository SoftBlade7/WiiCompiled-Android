#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080A01C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8080A01C;

loc_8080A01C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r6 = 1127219200;
    r5 = MemoryInline::FlatRead32((r3 + 292));
    r7 = MemoryInline::FlatRead32((r3 + 280));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    r0 = (r0 * r5);
    r6 = (r4 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r7));
}

loc_8080A044:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080A064;
    }
}

loc_8080A048:
{
    r0 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A0E8;
}

loc_8080A064:
{
    r4 = MemoryInline::FlatRead32((r3 + 284));
    r5 = (r7 + r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r5));
}

loc_8080A070:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080A094;
    }
}

loc_8080A074:
{
    r0 = (r6 - r7);
    r3 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r3 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A0E8;
}

loc_8080A094:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = (r3 + r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8080A0A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080A0C4;
    }
}

loc_8080A0A4:
{
    r0 = (r6 - r5);
    r3 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r3 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8080A0E8;
}

loc_8080A0C4:
{
    r0 = (0 - r3);
    r3 = 0x808B0000u;
    r0 = (r0 - r4);
    f1.d = MemoryInline::FlatReadFloat64((r3 + -20360));
    r0 = (r0 + r6);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_8080A0E8:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8080A01C func_8080A01C preserves=true fpr_mask=0x00000000
