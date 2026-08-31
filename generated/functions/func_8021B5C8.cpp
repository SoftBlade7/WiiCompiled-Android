#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021B5C8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8021B5C8;

loc_8021B5C8:
{
}

loc_8021B5CC:
{
    r31 = 1;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(11))) {
        goto loc_8021B5E0;
    }
}

loc_8021B5D4:
{
}

loc_8021B5D8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(13))) {
        goto loc_8021B5E0;
    }
}

loc_8021B5DC:
{
    r31 = 0;
}

loc_8021B5E0:
{
}

loc_8021B5E4:
{
    r30 = 1;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(10))) {
        goto loc_8021B5F8;
    }
}

loc_8021B5EC:
{
}

loc_8021B5F0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(11))) {
        goto loc_8021B5F8;
    }
}

loc_8021B5F4:
{
    r30 = 0;
}

loc_8021B5F8:
{
    r3 = 9;
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
}

loc_8021B608:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8021B618;
    }
}

loc_8021B60C:
{
    r3 = 13;
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
}

loc_8021B618:
{
}

loc_8021B61C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8021B628;
    }
}

loc_8021B620:
{
    r4 = (r2 + -25536);
    goto loc_8021B62C;
}

loc_8021B628:
{
    r4 = (r2 + -25568);
}

loc_8021B62C:
{
    r3 = 9;
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
}

loc_8021B63C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8021B650;
    }
}

loc_8021B640:
{
    r3 = 13;
    r4 = (r2 + -25536);
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
}

loc_8021B650:
{
    r3 = 0;
    r4 = 9;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8016DC68u>(ctx);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8021B66C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8021B688;
    }
}

loc_8021B670:
{
    r3 = 0;
    r4 = 13;
    r5 = 1;
    r6 = 0;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8016DC68u>(ctx);
}

loc_8021B688:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00000FE gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021B5C8 func_8021B5C8 preserves=true fpr_mask=0x00000000
