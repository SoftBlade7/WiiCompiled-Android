#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AE6F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AE6F4;

loc_801AE6F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 180;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
}

loc_801AE720:
{
    r0 = MemoryInline::FlatRead8((r28 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AE7AC;
    }
}

loc_801AE72C:
{
    r3 = (r28 + 2);
    r4 = (r28 + 3);
    r5 = 56;
    r6 = 15;
    ctx->lr = 0x801AE740u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AE5D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 4);
    r4 = (r28 + 5);
    r5 = 44;
    r6 = 15;
    ctx->lr = 0x801AE754u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AE5D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r28 + 6));
}

loc_801AE75C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(30))) {
        goto loc_801AE768;
    }
}

loc_801AE760:
{
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r30));
    goto loc_801AE780;
}

loc_801AE768:
{
}

loc_801AE76C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(180))) {
        goto loc_801AE774;
    }
}

loc_801AE770:
{
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r31));
}

loc_801AE774:
{
    r3 = MemoryInline::FlatRead8((r28 + 6));
    r0 = (r3 + -30);
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
}

loc_801AE780:
{
    r0 = MemoryInline::FlatRead8((r28 + 7));
}

loc_801AE788:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(30))) {
        goto loc_801AE794;
    }
}

loc_801AE78C:
{
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r30));
    goto loc_801AE7AC;
}

loc_801AE794:
{
}

loc_801AE798:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(180))) {
        goto loc_801AE7A0;
    }
}

loc_801AE79C:
{
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r31));
}

loc_801AE7A0:
{
    r3 = MemoryInline::FlatRead8((r28 + 7));
    r0 = (r3 + -30);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
}

loc_801AE7AC:
{
    r29 = (r29 + 1);
    r28 = (r28 + 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(4));
}

loc_801AE7B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801AE720;
    }
}

loc_801AE7BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8003FFF gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AE6F4 func_801AE6F4 preserves=true fpr_mask=0x00000000
