#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001F274(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001F274;

loc_8001F274:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r27);
    MemoryInline::FlatWriteRam32((r1 + 96), r28);
    MemoryInline::FlatWriteRam32((r1 + 100), r29);
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r27 = r3;
    r30 = r4;
    r28 = r5;
    r29 = r6;
    r3 = (r1 + 24);
    r4 = 0;
    r5 = 64;
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
    r0 = 0;
    MemoryInline::FlatWrite32(r28, r0);
    r0 = 210;
    r3 = r27;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001EF3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 + 65);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = r27;
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r30));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001EF3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r0));
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x8001F2E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001F2F8:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001F320;
    }
}

loc_8001F300:
{
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001EF3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = r27;
    r5 = (r5 + 1);
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

loc_8001F320:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8001F324:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001F36C;
    }
}

loc_8001F328:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r29, r0);
    r4 = (r1 + 16);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x8001F33Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8001F340:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8001F354;
    }
}

loc_8001F348:
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
    r30 = r3;
}

loc_8001F354:
{
    r0 = MemoryInline::FlatRead32((r30 + 28));
    MemoryInline::FlatWrite32(r29, r0);
    r0 = MemoryInline::FlatRead32((r30 + 20));
    MemoryInline::FlatWrite32(r28, r0);
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

loc_8001F36C:
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
    r27 = MemoryInline::FlatRead32((r1 + 92));
    r28 = MemoryInline::FlatRead32((r1 + 96));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001F274 func_8001F274 preserves=true fpr_mask=0x00000000
