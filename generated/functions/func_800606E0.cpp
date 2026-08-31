#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800606E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t mkw_fifo_burst_0[14];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800606E0;

loc_800606E0:
{
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r5 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = std::fabs(f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29556));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f9.d = std::fabs(f3.d);
    f6.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f7.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f8.d = MemoryInline::FlatReadFloat32((r4 + 24));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8006070C:
{
    f10.d = std::fabs(f5.d);
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    f11.d = std::fabs(f6.d);
    f12.d = std::fabs(f7.d);
    f13.d = std::fabs(f8.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060764;
    }
}

loc_80060728:
{
    SetCRFloatResident(cr, 0, f9.d, f0.d);
}

loc_8006072C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060764;
    }
}

loc_80060734:
{
    SetCRFloatResident(cr, 0, f10.d, f0.d);
}

loc_80060738:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060764;
    }
}

loc_80060740:
{
    SetCRFloatResident(cr, 0, f11.d, f0.d);
}

loc_80060744:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060764;
    }
}

loc_8006074C:
{
    SetCRFloatResident(cr, 0, f12.d, f0.d);
}

loc_80060750:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060764;
    }
}

loc_80060758:
{
    SetCRFloatResident(cr, 0, f13.d, f0.d);
}

loc_8006075C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800607FC;
    }
}

loc_80060764:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29552));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29556));
    // nop
}

loc_80060770:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(46));
}

loc_80060778:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_8006077C:
{
    f4.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8006078C:
{
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f6.d = PpcFmulsInline(f6.d, f1.d);
    f7.d = PpcFmulsInline(f7.d, f1.d);
    f8.d = PpcFmulsInline(f8.d, f1.d);
    f9.d = PpcFmulsInline(f9.d, f1.d);
    f10.d = PpcFmulsInline(f10.d, f1.d);
    f11.d = PpcFmulsInline(f11.d, f1.d);
    f12.d = PpcFmulsInline(f12.d, f1.d);
    f13.d = PpcFmulsInline(f13.d, f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r5 = (r5 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060770;
    }
}

loc_800607BC:
{
    SetCRFloatResident(cr, 0, f9.d, f0.d);
}

loc_800607C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060770;
    }
}

loc_800607C8:
{
    SetCRFloatResident(cr, 0, f10.d, f0.d);
}

loc_800607CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060770;
    }
}

loc_800607D4:
{
    SetCRFloatResident(cr, 0, f11.d, f0.d);
}

loc_800607D8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060770;
    }
}

loc_800607E0:
{
    SetCRFloatResident(cr, 0, f12.d, f0.d);
}

loc_800607E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060770;
    }
}

loc_800607EC:
{
    SetCRFloatResident(cr, 0, f13.d, f0.d);
}

loc_800607F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060770;
    }
}

loc_800607F8:
{
    goto loc_800608A4;
}

loc_800607FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29552));
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_80060804:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060808:
{
    SetCRFloatResident(cr, 0, f9.d, f1.d);
}

loc_8006080C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060810:
{
    SetCRFloatResident(cr, 0, f10.d, f1.d);
}

loc_80060814:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060818:
{
    SetCRFloatResident(cr, 0, f11.d, f1.d);
}

loc_8006081C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060820:
{
    SetCRFloatResident(cr, 0, f12.d, f1.d);
}

loc_80060824:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060828:
{
    SetCRFloatResident(cr, 0, f13.d, f1.d);
}

loc_8006082C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060830:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29548));
}

loc_80060834:
{
    f4.d = PpcFmulsInline(f4.d, f0.d);
    r5 = (r5 + -1);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_80060848:
{
    f5.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PpcFmulsInline(f6.d, f0.d);
    f7.d = PpcFmulsInline(f7.d, f0.d);
    f8.d = PpcFmulsInline(f8.d, f0.d);
    f9.d = PpcFmulsInline(f9.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f11.d = PpcFmulsInline(f11.d, f0.d);
    f12.d = PpcFmulsInline(f12.d, f0.d);
    f13.d = PpcFmulsInline(f13.d, f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060870:
{
    SetCRFloatResident(cr, 0, f9.d, f1.d);
}

loc_80060874:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060878:
{
    SetCRFloatResident(cr, 0, f10.d, f1.d);
}

loc_8006087C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060880:
{
    SetCRFloatResident(cr, 0, f11.d, f1.d);
}

loc_80060884:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060888:
{
    SetCRFloatResident(cr, 0, f12.d, f1.d);
}

loc_8006088C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060890:
{
    SetCRFloatResident(cr, 0, f13.d, f1.d);
}

loc_80060894:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800608A4;
    }
}

loc_80060898:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-17));
}

loc_800608A0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80060834;
    }
}

loc_800608A4:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -29544));
    r9 = (r5 + 17);
    r0 = (r3 + 6);
    r4 = (r3 + 7);
    f2.d = PpcFmulsInline(f4.d, f2.d);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(22));
    r6 = (r6_rot_0 & 12582912);
    f0.d = PpcFmulsInline(f4.d, f6.d);
    r7 = -872349696;
    f1.d = PpcFmulsInline(f4.d, f3.d);
    r8 = 97;
    f3.d = PPC_Fctiwz(f2.d);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6_mrot_0 = (r6_rot_1 & -16777216);
    r6_mdest_0 = (r6 & 16777215);
    r6 = (r6_mdest_0 | r6_mrot_0);
    f2.d = PPC_Fctiwz(f0.d);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    f0.d = PpcFmulsInline(f4.d, f7.d);
    r3 = (r3 + 8);
    fctiwzword0 = PPC_FprLowWordInline(f3.d);
    f3.d = PPC_Fctiwz(f1.d);
    f1.d = PpcFmulsInline(f4.d, f5.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    f2.d = PPC_Fctiwz(f0.d);
    f0.d = PpcFmulsInline(f4.d, f8.d);
    r5 = fctiwzword0;
    r0 = fctiwzword1;
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword2 = PPC_FprLowWordInline(f3.d);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_0 & 4192256);
    r0_mrot_0 = (r5 & 2047);
    r0_mdest_0 = (r0 & -2048);
    r0 = (r0_mdest_0 | r0_mrot_0);
    f0.d = PPC_Fctiwz(f0.d);
    r0 = (r6 | r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r6 = (r6_rot_2 & 12582912);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r6_mrot_1 = (r6_rot_3 & -16777216);
    r6_mdest_1 = (r6 & 16777215);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r4 = fctiwzword2;
    fctiwzword3 = PPC_FprLowWordInline(f2.d);
    r0 = fctiwzword3;
    mkw_fifo_burst_0[4] = static_cast<uint8_t>(r8);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r5 = (r5_rot_0 & 4192256);
    r5_mrot_0 = (r4 & 2047);
    r5_mdest_0 = (r5 & -2048);
    r5 = (r5_mdest_0 | r5_mrot_0);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r5 = (r6 | r5);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(18));
    r4 = (r4_rot_0 & 12582912);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r4_mrot_0 = (r4_rot_1 & -16777216);
    r4_mdest_0 = (r4 & 16777215);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r0 = fctiwzword4;
    fctiwzword5 = PPC_FprLowWordInline(f1.d);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r0 = (r0_rot_1 & 4192256);
    r3 = fctiwzword5;
    mkw_fifo_burst_0[9] = static_cast<uint8_t>(r8);
    r0_mrot_1 = (r3 & 2047);
    r0_mdest_1 = (r0 & -2048);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (r4 | r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 14u);
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800606E0 func_800606E0 preserves=true fpr_mask=0x00000000
