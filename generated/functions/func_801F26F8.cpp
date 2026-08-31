#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F26F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F26F8;

loc_801F26F8:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r4 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 136), r30);
    MemoryInline::FlatWriteRam32((r1 + 132), r29);
    r30 = MemoryInline::FlatRead16((r3 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x801F2724u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F3FF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801F2728:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F2738;
    }
}

loc_801F272C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801F2730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2738;
    }
}

loc_801F2734:
{
    goto loc_801F283C;
}

loc_801F2738:
{
}

loc_801F273C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_801F27F8;
    }
}

loc_801F2740:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
}

loc_801F2744:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F278C;
    }
}

loc_801F2748:
{
    r5 = (r30 * 20);
    r3 = (r1 + 52);
    r3_addr_1 = (r3 + r5);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F2758:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F2764;
    }
}

loc_801F275C:
{
    r3 = 7;
    goto loc_801F283C;
}

loc_801F2764:
{
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r4 = (r1 + 56);
    r3 = (r1 + 41);
    r4_addr_1 = (r4 + r5);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r31 + 24), r0);
    r3_addr_2 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    MemoryInline::FlatWrite8((r31 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32((r31 + 28), r0);
    goto loc_801F2838;
}

loc_801F278C:
{
    r29 = 4;
}

loc_801F2790:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r1 + 32);
    ctx->lr = 0x801F279Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F40B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801F27A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F27B0;
    }
}

loc_801F27A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_801F27A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F27B0;
    }
}

loc_801F27AC:
{
    goto loc_801F283C;
}

loc_801F27B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_801F27B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F27E8;
    }
}

loc_801F27B8:
{
    r0 = (r29 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_801F27C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F27F0;
    }
}

loc_801F27C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r0 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWrite32((r31 + 24), r0);
    r0 = MemoryInline::FlatRead8((r1 + 41));
    MemoryInline::FlatWrite8((r31 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32((r31 + 28), r0);
    goto loc_801F2838;
}

loc_801F27E8:
{
    r3 = 7;
    goto loc_801F283C;
}

loc_801F27F0:
{
    r29 = (r29 + 1);
    goto loc_801F2790;
}

loc_801F27F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_801F27FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F2808;
    }
}

loc_801F2800:
{
    r3 = 7;
    goto loc_801F283C;
}

loc_801F2808:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F2220u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F2818:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F2820;
    }
}

loc_801F281C:
{
    goto loc_801F283C;
}

loc_801F2820:
{
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r31 + 24), r0);
    MemoryInline::FlatWrite8((r31 + 32), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r31 + 28), r3);
}

loc_801F2838:
{
    r3 = 0;
}

loc_801F283C:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    r29 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F26F8 func_801F26F8 preserves=true fpr_mask=0x00000000
