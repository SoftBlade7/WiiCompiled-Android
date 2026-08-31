#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EC5B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801EC5B8;

loc_801EC5B8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r13 + -24272));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801EC5E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC608;
    }
}

loc_801EC5EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EC5F4;
    }
}

loc_801EC5F0:
{
    goto loc_801EC600;
}

loc_801EC5F4:
{
}

loc_801EC5F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_801EC600;
    }
}

loc_801EC5FC:
{
    goto loc_801EC610;
}

loc_801EC600:
{
    r30 = -39;
    goto loc_801EC728;
}

loc_801EC608:
{
    r30 = -7;
    goto loc_801EC728;
}

loc_801EC610:
{
    r31 = 0x80350000u;
    r31 = (r31 + 29216);
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_801EC620:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801EC62C;
    }
}

loc_801EC624:
{
    r30 = -10;
    goto loc_801EC728;
}

loc_801EC62C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EC634:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EC640;
    }
}

loc_801EC638:
{
    r30 = 0x80000000u;
    goto loc_801EC728;
}

loc_801EC640:
{
    r0 = -1;
    r3 = r29;
    MemoryInline::FlatWriteRam32((r31 + 8), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 8);
    ctx->lr = 0x801EC658u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801E5FE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 + 33);
    r4 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801EC664:
{
    r30 = -28;
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(33))) {
        goto loc_801EC6A8;
    }
}

loc_801EC66C:
{
    r3 = 0x802A0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 9208);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801EC694u:
        goto loc_801EC694;
        break;
    case 0x801EC6A8u:
        goto loc_801EC6A8;
        break;
    case 0x801EC6A4u:
        goto loc_801EC6A4;
        break;
    case 0x801EC68Cu:
        goto loc_801EC68C;
        break;
    case 0x801EC69Cu:
        goto loc_801EC69C;
        break;
    case 0x801EC684u:
        goto loc_801EC684;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_801EC684:
{
    r30 = 0;
    goto loc_801EC6A8;
}

loc_801EC68C:
{
    r30 = -48;
    goto loc_801EC6A8;
}

loc_801EC694:
{
    r30 = r4;
    goto loc_801EC6A8;
}

loc_801EC69C:
{
    r30 = 0x80000000u;
    goto loc_801EC6A8;
}

loc_801EC6A4:
{
    r30 = -26;
}

loc_801EC6A8:
{
}

loc_801EC6AC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801EC6D8;
    }
}

loc_801EC6B0:
{
    r31 = 0x80350000u;
    r31 = (r31 + 29216);
    r3 = MemoryInline::FlatRead32((r31 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80193AD8u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801EC6C4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801EC6D0;
    }
}

loc_801EC6C8:
{
    r30 = 0x80000000u;
    goto loc_801EC6D8;
}

loc_801EC6D0:
{
    r0 = -1;
    MemoryInline::FlatWriteRam32((r31 + 12), r0);
}

loc_801EC6D8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
}

loc_801EC6E0:
{
    r29 = r3;
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801EC704;
    }
}

loc_801EC6E8:
{
    r3 = 0x80350000u;
    r4 = 1;
    r3 = (r3 + 29216);
    r0 = -2;
    MemoryInline::FlatWrite8((r13 + -24272), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    goto loc_801EC728;
}

loc_801EC704:
{
    r0 = (r30 + -2147483648);
}

loc_801EC70C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_801EC728;
    }
}

loc_801EC710:
{
    r3 = 0x80350000u;
    r4 = 2;
    r3 = (r3 + 29216);
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -24272), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
}

loc_801EC728:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EC730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EC73C;
    }
}

loc_801EC734:
{
    MemoryInline::FlatWrite32((r3 + 780), r30);
    goto loc_801EC740;
}

loc_801EC73C:
{
    MemoryInline::FlatWrite32((r13 + -24268), r30);
}

loc_801EC740:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801EC5B8 func_801EC5B8 preserves=true fpr_mask=0x00000000
