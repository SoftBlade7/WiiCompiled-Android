#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B1A74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805B1A74;

loc_805B1A74:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    r7 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r6 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r29 + 6216));
    r5 = MemoryInline::FlatRead32((r5 + 6584));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r7 = MemoryInline::FlatRead32((r7 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 104));
    r3 = MemoryInline::FlatRead32((r5 + 24));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = MemoryInline::FlatRead32((r7 + 2932));
    r3_addr_0 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_0);
    r0 = (r5 + -5);
    r3 = MemoryInline::FlatRead32((r6 + 6392));
    r4 = MemoryInline::FlatRead8((r4 + 156));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805B1AE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B1AFC;
    }
}

loc_805B1AE8:
{
    r3 = MemoryInline::FlatRead32((r29 + 6216));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 108));
    r8 = (r3 + 100);
    goto loc_805B1B04;
}

loc_805B1AFC:
{
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r8 = r3;
}

loc_805B1B04:
{
    r7 = MemoryInline::FlatRead32(r8);
    r29 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r8 + 4));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = -1;
    r3 = MemoryInline::FlatRead32((r29 + -10520));
    r6 = 2;
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x805B1B34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516808u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r4 = r3;
    r6 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805B1B58;
    }
}

loc_805B1B44:
{
    r3 = MemoryInline::FlatRead32((r29 + -10520));
    r4 = (r4 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516768u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r6 = MemoryInline::FlatRead16((r3 + 40));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_805B1B58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805B1B5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B1B8C;
    }
}

loc_805B1B60:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r30 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 6216));
    r4 = (r6 & 255);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 104));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r5_addr_0 = (r5 + r0);
    r3 = MemoryInline::FlatRead32(r5_addr_0);
    // inline leaf 0x805AE3BC (33 guest instruction(s))
}

loc_inl2_0x805AE3BC:
{
    r6 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl2_0x805AE3C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x805AE3C8:
{
    r0 = (r4 * 28);
    r5 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 9456));
    r5 = (r6 + r0);
    r6_addr_0 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 22u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 8), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 12), f1.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r5 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r5 + 13));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r5 + 14));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r5 + 15));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r5 + 16));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 20), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r5 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 24), f1.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r5 + 24));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r5 + 25));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r3 + 29), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 32), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 33), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 40), f0.d);
    goto loc_inl2_cont_805AE3BC;
}

loc_inl2_return:
{
}

loc_inl2_cont_805AE3BC:
{
    // end of inlined leaf 0x805AE3BC
    goto loc_805B1BB0;
}

loc_805B1B8C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r30 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 6216));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 104));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 262140);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r6));
}

loc_805B1BB0:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 56));
    r4 = MemoryInline::FlatRead32((r4 + 6216));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r4 = MemoryInline::FlatRead32((r4 + 104));
    ctx->lr = 0x805B1BC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE53Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r30 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805B1BD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B1C5C;
    }
}

loc_805B1BD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805B1BD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B1BE8;
    }
}

loc_805B1BDC:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9684));
    MemoryInline::FlatWriteFloat32((r4 + 32), f0.d);
}

loc_805B1BE8:
{
    r31 = 0x809C0000u;
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r31 + -10520));
    r5 = -1;
    r6 = 6;
    ctx->lr = 0x805B1C00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516808u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r4 = r3;
    r6 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805B1C24;
    }
}

loc_805B1C10:
{
    r3 = MemoryInline::FlatRead32((r31 + -10520));
    r4 = (r4 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516768u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r6 = MemoryInline::FlatRead16((r3 + 40));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_805B1C24:
{
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r30 + 200));
    r3 = MemoryInline::FlatRead32((r4 + 6216));
    r5 = MemoryInline::FlatRead32((r5 + 24));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 104));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5_addr_3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32(r5_addr_3);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r6));
    r4 = MemoryInline::FlatRead32((r4 + 6216));
    r3 = MemoryInline::FlatRead32((r30 + 200));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r4 = MemoryInline::FlatRead32((r4 + 104));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x805A1750u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_805B1C5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805B1A74 func_805B1A74 preserves=true fpr_mask=0x00000000
