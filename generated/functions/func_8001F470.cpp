#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001F470(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

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

    goto loc_8001F470;

loc_8001F470:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r31 = r5;
    r5 = 64;
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 100), r29);
    r29 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 96), r28);
    r28 = r3;
    r3 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001CCA8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 212;
    r0 = 64;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r3));
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r31));
    ctx->lr = 0x8001F4D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D17Cu>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001F4DC:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001F4F8;
    }
}

loc_8001F4E4:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 24);
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001D5B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r31 = r3;
}

loc_8001F4F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8001F4FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001F550;
    }
}

loc_8001F500:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    r0 = -1;
    r4 = (r1 + 16);
    MemoryInline::FlatWrite32(r29, r0);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x8001F51Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001F14Cu>(ctx);
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
}

loc_8001F520:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8001F548;
    }
}

loc_8001F528:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    // inline leaf 0x8001D218 (9 guest instruction(s))
}

loc_inl0_0x8001D218:
{
}

loc_inl0_0x8001D21C:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl0_0x8001D234;
    }
}

loc_inl0_0x8001D224:
{
    r0 = (r3 * 2188);
    r3 = 0x802A0000u;
    r3 = (r3 + 18936);
    r0 = (r3 + r0);
}

loc_inl0_0x8001D234:
{
    r3 = r0;
}

loc_inl0_cont_8001D218:
{
    // end of inlined leaf 0x8001D218
}

loc_8001F534:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8001F548;
    }
}

loc_8001F538:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::FlatWrite32(r30, r0);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32(r29, r0);
}

loc_8001F548:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    // inline leaf 0x8001D23C (10 guest instruction(s))
}

loc_inl1_0x8001D23C:
{
}

loc_inl1_0x8001D240:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8001D244:
{
}

loc_inl1_0x8001D248:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8001D24C:
{
    r0 = (r3 * 2188);
    r3 = 0x802A0000u;
    r4 = 0;
    r3 = (r3 + 18936);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r4);
    goto loc_inl1_cont_8001D23C;
}

loc_inl1_return:
{
}

loc_inl1_cont_8001D23C:
{
    // end of inlined leaf 0x8001D23C
}

loc_8001F550:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    // inline leaf 0x8001D23C (10 guest instruction(s))
}

loc_inl2_0x8001D23C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_inl2_0x8001D240:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8001D244:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_inl2_0x8001D248:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8001D24C:
{
    r0 = (r3 * 2188);
    r3 = 0x802A0000u;
    r4 = 0;
    r3 = (r3 + 18936);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_4, r4);
    goto loc_inl2_cont_8001D23C;
}

loc_inl2_return:
{
}

loc_inl2_cont_8001D23C:
{
    // end of inlined leaf 0x8001D23C
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    r28 = MemoryInline::FlatRead32((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001F470 func_8001F470 preserves=true fpr_mask=0x00000000
