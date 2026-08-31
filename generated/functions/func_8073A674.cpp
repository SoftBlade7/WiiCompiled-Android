#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073A674(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_8073A730_loc_0 = 0;
    uint32_t addr_lhax_8073A73C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8073A674;

loc_8073A674:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r5 = 0x809C0000u;
    r27 = r3;
    r31 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r5 + 12016));
    r28 = r4;
    r30 = 0;
    r31 = (r31 + 10008);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80785E5Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8073A6AC:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8073A770;
    }
}

loc_8073A6B4:
{
    r4 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r4 + -20516));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8073A6D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8073A6DC;
    }
}

loc_8073A6D4:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8073A6D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073A6E4;
    }
}

loc_8073A6DC:
{
    r0 = 0;
    goto loc_8073A6E8;
}

loc_8073A6E4:
{
    r0 = 1;
}

loc_8073A6E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073A6EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A770;
    }
}

loc_8073A6F0:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8073A704u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = r3;
    r3 = MemoryInline::FlatRead32((r27 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082B4E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = 0x809C0000u;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = MemoryInline::FlatRead32((r4 + 17200));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 131070);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r5 = MemoryInline::FlatRead32((r5 + 12));
    addr_lhax_8073A730_loc_0 = (r4 + r3);
    r3 = MemoryInline::FlatRead16(addr_lhax_8073A730_loc_0);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r5_addr_1 = (r5 + r3);
    r3 = MemoryInline::FlatRead32(r5_addr_1);
    addr_lhax_8073A73C_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8073A73C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8073A744:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8073A770;
    }
}

loc_8073A748:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r30 = 1;
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 48));
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 52));
    MemoryInline::FlatWriteFloat32((r28 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 56));
    MemoryInline::FlatWriteFloat32((r28 + 32), f0.d);
}

loc_8073A770:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8073A774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A780;
    }
}

loc_8073A778:
{
    r3 = 1;
    goto loc_8073A868;
}

loc_8073A780:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -2147483648);
}

loc_8073A794:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8073A7A4;
    }
}

loc_8073A798:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073A7A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A7AC;
    }
}

loc_8073A7A4:
{
    r26 = 0;
    goto loc_8073A854;
}

loc_8073A7AC:
{
    r26 = 0;
    r29 = 0x808D0000u;
    r27 = 0x809C0000u;
    goto loc_8073A840;
}

loc_8073A7BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + -20516));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = (-(f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8073A7D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8073A7E0;
    }
}

loc_8073A7D8:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8073A7DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073A7E8;
    }
}

loc_8073A7E0:
{
    r0 = 0;
    goto loc_8073A7EC;
}

loc_8073A7E8:
{
    r0 = 1;
}

loc_8073A7EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073A7F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A840;
    }
}

loc_8073A7F4:
{
    r3 = r30;
    // inline leaf 0x807A2234 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 89));
    // end of inlined leaf 0x807A2234
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073A800:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A840;
    }
}

loc_8073A804:
{
    r0 = MemoryInline::FlatRead32((r30 + 120));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073A80C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A840;
    }
}

loc_8073A810:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r26 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    MemoryInline::FlatWriteFloat32((r28 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    MemoryInline::FlatWriteFloat32((r28 + 32), f0.d);
    goto loc_8073A854;
}

loc_8073A840:
{
    r3 = MemoryInline::FlatRead32((r27 + 12016));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80785DF4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8073A84C:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8073A7BC;
    }
}

loc_8073A854:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8073A858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A864;
    }
}

loc_8073A85C:
{
    r3 = 1;
    goto loc_8073A868;
}

loc_8073A864:
{
    r3 = 0;
}

loc_8073A868:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8073A674 func_8073A674 preserves=true fpr_mask=0x00000000
