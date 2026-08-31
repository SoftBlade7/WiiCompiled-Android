#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80617A4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;
    uint32_t r5_stbu_ea_5 = 0;
    uint32_t r5_stbu_ea_6 = 0;
    uint32_t r5_stbu_ea_7 = 0;
    uint32_t r5_stbu_ea_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80617A4C;

loc_80617A4C:
{
    MemoryInline::FlatWriteRam32((r1 + -432), r1);
    r1 = (r1 + -432);
    r0 = ctx->lr;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 436), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 428), r31);
    MemoryInline::FlatWriteRam32((r1 + 424), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 420), r29);
    MemoryInline::FlatWriteRam32((r1 + 416), r28);
    MemoryInline::FlatWrite32((r3 + 384), r4);
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 433), static_cast<uint8_t>(r0));
    r3 = (r3 + 436);
    // inline leaf 0x805EFD14 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 112), r4);
    // end of inlined leaf 0x805EFD14
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 372), 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 372));
}

loc_80617A90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80617AB0;
    }
}

loc_80617A94:
{
}

loc_80617A98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80617B40;
    }
}

loc_80617A9C:
{
}

loc_80617AA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80617E08;
    }
}

loc_80617AA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80617AA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617E78;
    }
}

loc_80617AAC:
{
    goto loc_80617F44;
}

loc_80617AB0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 392));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 380));
    r3 = (r3 + 372);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x805FA930
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80617ACC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80617F44;
    }
}

loc_80617AD0:
{
    r31 = 0x809C0000u;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 376));
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2900 (19 guest instruction(s))
}

loc_inl2_0x805D2900:
{
}

loc_inl2_0x805D2904:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(29))) {
        goto loc_inl2_0x805D2944;
    }
}

loc_inl2_0x805D2908:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x805D2944;
    }
}

loc_inl2_0x805D2920:
{
    r4 = MemoryInline::FlatRead32((r4 + 464));
    r3 = 25;
    r4 = (r4 + -1);
    r0 = (25 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(25) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r3 | ~r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_6 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    goto loc_inl2_cont_805D2900;
}

loc_inl2_0x805D2944:
{
    r3 = 0;
}

loc_inl2_cont_805D2900:
{
    // end of inlined leaf 0x805D2900
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80617AEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617F44;
    }
}

loc_80617AF0:
{
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r30 + 376));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D2890 (14 guest instruction(s))
}

loc_inl3_0x805D2890:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
}

loc_inl3_0x805D2894:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl3_0x805D28C0;
    }
}

loc_inl3_0x805D2898:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_0x805D28B8;
    }
}

loc_inl3_0x805D28B0:
{
    r3 = (r4 + 8);
    goto loc_inl3_cont_805D2890;
}

loc_inl3_0x805D28B8:
{
    r3 = 0;
    goto loc_inl3_cont_805D2890;
}

loc_inl3_0x805D28C0:
{
    r3 = 0;
}

loc_inl3_cont_805D2890:
{
    // end of inlined leaf 0x805D2890
    r0 = 38;
    r5 = (r1 + 111);
    r4 = (r3 + 33);
    ctr = r0;
}

loc_80617B14:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_7 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_7, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_7;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80617B14;
    }
}

loc_80617B28:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 392));
    r5 = (r1 + 112);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 380));
    r3 = (r3 + 372);
    ctx->lr = 0x80617B3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805FA610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80617F44;
}

loc_80617B40:
{
    r28 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 392));
    r0 = MemoryInline::FlatRead32((r28 + 3132));
}

loc_80617B4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80617B5C;
    }
}

loc_80617B50:
{
}

loc_80617B54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80617B64;
    }
}

loc_80617B58:
{
    goto loc_80617B68;
}

loc_80617B5C:
{
    r31 = 1;
    goto loc_80617B68;
}

loc_80617B64:
{
    r31 = 0;
}

loc_80617B68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80617B6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80617B78;
    }
}

loc_80617B70:
{
    r28 = 0;
    goto loc_80617BCC;
}

loc_80617B78:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7524);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617BC8;
    }
}

loc_80617B84:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80617B98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80617BB0;
}

loc_80617B9C:
{
}

loc_80617BA0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_80617BAC;
    }
}

loc_80617BA4:
{
    r0 = 1;
    goto loc_80617BBC;
}

loc_80617BAC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80617BB0:
{
}

loc_80617BB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80617B9C;
    }
}

loc_80617BB8:
{
    r0 = 0;
}

loc_80617BBC:
{
}

loc_80617BC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80617BC8;
    }
}

loc_80617BC4:
{
    goto loc_80617BCC;
}

loc_80617BC8:
{
    r28 = 0;
}

loc_80617BCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80617BD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617C4C;
    }
}

loc_80617BD4:
{
    r3 = MemoryInline::FlatRead32((r30 + 392));
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r3 = MemoryInline::FlatRead32((r3 + 3128));
    r28 = (r4 + 131072);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80617DF0;
    }
}

loc_80617BF4:
{
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead32((r28 + 20476));
    r0 = (r0 * 160);
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    r4 = (r31 * 80);
    r0 = (r3 + r0);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r3 + 9008));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80617C20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80617DF0;
    }
}

loc_80617C24:
{
    r0 = 38;
    r5 = (r1 + 35);
    r4 = (r3 + 9011);
    ctr = r0;
}

loc_80617C34:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_2, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80617C34;
    }
}

loc_80617C48:
{
    goto loc_80617DF0;
}

loc_80617C4C:
{
    r28 = MemoryInline::FlatRead32((r30 + 392));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80617C54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80617C60;
    }
}

loc_80617C58:
{
    r28 = 0;
    goto loc_80617CB4;
}

loc_80617C60:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7528);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617CB0;
    }
}

loc_80617C6C:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80617C80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80617C98;
}

loc_80617C84:
{
}

loc_80617C88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_80617C94;
    }
}

loc_80617C8C:
{
    r0 = 1;
    goto loc_80617CA4;
}

loc_80617C94:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80617C98:
{
}

loc_80617C9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80617C84;
    }
}

loc_80617CA0:
{
    r0 = 0;
}

loc_80617CA4:
{
}

loc_80617CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80617CB0;
    }
}

loc_80617CAC:
{
    goto loc_80617CB4;
}

loc_80617CB0:
{
    r28 = 0;
}

loc_80617CB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80617CB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617DF0;
    }
}

loc_80617CBC:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x80617CD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r30 + 392));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 3128));
}

loc_80617CE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80617D44;
    }
}

loc_80617CEC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = (r31 * 84);
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 14128));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80617D18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80617DF0;
    }
}

loc_80617D1C:
{
    r0 = 38;
    r5 = (r1 + 35);
    r4 = (r3 + 14135);
    ctr = r0;
}

loc_80617D2C:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_4 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_4, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_4;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80617D2C;
    }
}

loc_80617D40:
{
    goto loc_80617DF0;
}

loc_80617D44:
{
    r0 = MemoryInline::FlatRead32((r4 + 3132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80617D4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617D5C;
    }
}

loc_80617D50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80617D54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617D64;
    }
}

loc_80617D58:
{
    goto loc_80617D68;
}

loc_80617D5C:
{
    r31 = 1;
    goto loc_80617D68;
}

loc_80617D64:
{
    r31 = 0;
}

loc_80617D68:
{
    r4 = 0x808B0000u;
    r0 = 0;
    r4 = (r4 + 11588);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 200), 0, 23u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 200), r4);
    r3 = 0x809C0000u;
    r5 = r31;
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r1 + 210), static_cast<uint8_t>(r0));
    r6 = (r1 + 192);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    r7 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 204), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 206), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 208), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 212), r4);
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r1 + 222), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r1 + 216), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r1 + 218), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r1 + 220), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 392));
    r4 = MemoryInline::FlatRead32((r4 + 3128));
    ctx->lr = 0x80617DBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066B8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80617DC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617DF0;
    }
}

loc_80617DC4:
{
    r0 = 9;
    r5 = (r1 + 32);
    r4 = (r1 + 220);
    ctr = r0;
}

loc_80617DD4:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80617DD4;
    }
}

loc_80617DE8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
}

loc_80617DF0:
{
    r3 = MemoryInline::FlatRead32((r30 + 392));
    r5 = (r1 + 36);
    r4 = MemoryInline::FlatRead32((r30 + 380));
    r3 = (r3 + 372);
    ctx->lr = 0x80617E04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805FA610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80617F44;
}

loc_80617E08:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    // inline leaf 0x8066CB30 (7 guest instruction(s))
}

loc_inl4_0x8066CB30:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
}

loc_inl4_0x8066CB38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_inl4_0x8066CB44;
    }
}

loc_inl4_0x8066CB3C:
{
    r3 = (r3 + 30096);
    goto loc_inl4_cont_8066CB30;
}

loc_inl4_0x8066CB44:
{
    r3 = 0;
}

loc_inl4_cont_8066CB30:
{
    // end of inlined leaf 0x8066CB30
    r0 = MemoryInline::FlatRead32(r3);
    r6 = r3;
    r7 = 0;
    r8 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80617E2C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80617E60;
    }
}

loc_80617E30:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 392));
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 3128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80617E40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80617E54;
    }
}

loc_80617E44:
{
    r0 = (r8 * 112);
    r3 = (r3 + r0);
    r7 = (r3 + 4);
    goto loc_80617E60;
}

loc_80617E54:
{
    r6 = (r6 + 112);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80617E30;
    }
}

loc_80617E60:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 392));
    r5 = (r7 + 20);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r30 + 380));
    r3 = (r3 + 372);
    ctx->lr = 0x80617E74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805FA610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80617F44;
}

loc_80617E78:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80617E8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80617E98;
    }
}

loc_80617E90:
{
    r29 = 0;
    goto loc_80617EEC;
}

loc_80617E98:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617EE8;
    }
}

loc_80617EA4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80617EB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80617ED0;
}

loc_80617EBC:
{
}

loc_80617EC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_80617ECC;
    }
}

loc_80617EC4:
{
    r0 = 1;
    goto loc_80617EDC;
}

loc_80617ECC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80617ED0:
{
}

loc_80617ED4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80617EBC;
    }
}

loc_80617ED8:
{
    r0 = 0;
}

loc_80617EDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80617EE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80617EE8;
    }
}

loc_80617EE4:
{
    goto loc_80617EEC;
}

loc_80617EE8:
{
    r29 = 0;
}

loc_80617EEC:
{
    r3 = MemoryInline::FlatRead32((r30 + 392));
    r28 = MemoryInline::FlatRead32((r3 + 3128));
    r3 = r28;
    ctx->lr = 0x80617EFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80550468u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80617F00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80617F1C;
    }
}

loc_80617F04:
{
    r3 = r29;
    r6 = r28;
    r4 = 38;
    r5 = 0;
    ctx->lr = 0x80617F18u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x805E163Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_80617F30;
}

loc_80617F1C:
{
    r3 = r29;
    r6 = r28;
    r4 = 37;
    r5 = 0;
    ctx->lr = 0x80617F30u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x805E163Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80617F30:
{
    r6 = MemoryInline::FlatRead32((r30 + 392));
    r5 = (r3 + 24);
    r4 = MemoryInline::FlatRead32((r30 + 380));
    r3 = (r6 + 372);
    ctx->lr = 0x80617F44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805FA610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80617F44:
{
    r0 = MemoryInline::FlatRead32((r1 + 436));
    r31 = MemoryInline::FlatRead32((r1 + 428));
    r30 = MemoryInline::FlatRead32((r1 + 424));
    r29 = MemoryInline::FlatRead32((r1 + 420));
    r28 = MemoryInline::FlatRead32((r1 + 416));
    ctx->lr = r0;
    r1 = (r1 + 432);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80617A4C func_80617A4C preserves=true fpr_mask=0x00000000
