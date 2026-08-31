#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071DC94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8071DD44_loc_0 = 0;
    uint32_t addr_lfsx_8071DD90_loc_0 = 0;
    uint32_t addr_lfsx_8071DD9C_loc_0 = 0;
    uint32_t addr_lfsx_8071DDC0_loc_0 = 0;
    uint32_t addr_lfsx_8071DDCC_loc_0 = 0;
    uint32_t addr_lfsx_8071DEBC_loc_0 = 0;
    uint32_t addr_lfsx_8071DEC4_loc_0 = 0;
    uint32_t addr_lfsx_8071DEE8_loc_0 = 0;
    uint32_t addr_lfsx_8071DEEC_loc_0 = 0;
    uint32_t addr_lfsx_8071DEF8_loc_0 = 0;
    uint32_t addr_lfsx_8071DEFC_loc_0 = 0;
    uint32_t addr_lfsx_8071DF2C_loc_0 = 0;
    uint32_t addr_lfsx_8071DF44_loc_0 = 0;
    uint32_t addr_stfsx_8071E034_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071DC94;

loc_8071DC94:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 112);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r9 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r27 = r3;
}

loc_8071DCD4:
{
    f29.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r0 = r9;
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_8071DCEC;
    }
}

loc_8071DCE4:
{
    r0 = (r9 + 128);
    goto loc_8071DCF8;
}

loc_8071DCEC:
{
}

loc_8071DCF0:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(128))) {
        goto loc_8071DCF8;
    }
}

loc_8071DCF4:
{
    r0 = (r9 + -128);
}

loc_8071DCF8:
{
    r8 = (r9 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r9)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8071DCFC:
{
    r6 = MemoryInline::FlatRead32((r3 + 36));
    r5 = (r0 * 12);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r0 = (r30 + r6);
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_8071DD18;
    }
}

loc_8071DD10:
{
    r8 = (r8 + 128);
    goto loc_8071DD24;
}

loc_8071DD18:
{
}

loc_8071DD1C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(128))) {
        goto loc_8071DD24;
    }
}

loc_8071DD20:
{
    r8 = (r8 + -128);
}

loc_8071DD24:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & -8);
    r7 = (r30 + r6);
    r31 = (r3 + r4);
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r4 = (r8 * 12);
    r29 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071DD40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071DD84;
    }
}

loc_8071DD44:
{
    addr_lfsx_8071DD44_loc_0 = (r5 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DD44_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f29.d);
}

loc_8071DD4C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071DD64;
    }
}

loc_8071DD54:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    MemoryInline::FlatWrite32((r31 + 12), r9);
    goto loc_8071E04C;
}

loc_8071DD64:
{
    f0.d = (-(f29.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071DD6C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8071E04C;
    }
}

loc_8071DD74:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    MemoryInline::FlatWrite32((r31 + 12), r9);
    goto loc_8071E04C;
}

loc_8071DD84:
{
    r8 = 0;
    r3 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071DDBC;
    }
}

loc_8071DD90:
{
    addr_lfsx_8071DD90_loc_0 = (r4 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DD90_loc_0);
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_8071DD98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071DDE8;
    }
}

loc_8071DD9C:
{
    addr_lfsx_8071DD9C_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DD9C_loc_0);
    r8 = 1;
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_8071DDA8:
{
    r3 = cr;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    goto loc_8071DDE8;
}

loc_8071DDBC:
{
    f1.d = (-(f29.d));
    addr_lfsx_8071DDC0_loc_0 = (r4 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DDC0_loc_0);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8071DDC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071DDE8;
    }
}

loc_8071DDCC:
{
    addr_lfsx_8071DDCC_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DDCC_loc_0);
    r8 = 1;
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8071DDD8:
{
    r3 = cr;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & 1);
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
}

loc_8071DDE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8071DDEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071E04C;
    }
}

loc_8071DDF0:
{
    r28 = (r9 + -1);
}

loc_8071DDF8:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r29))) {
        goto loc_8071DE00;
    }
}

loc_8071DDFC:
{
    r28 = (r28 + 128);
}

loc_8071DE00:
{
    r7 = (r29 + -2);
}

loc_8071DE04:
{
    r4 = (r28 - r29);
    r4 = (r4 + -1);
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_8071DE18;
    }
}

loc_8071DE10:
{
    r7 = (r7 + 128);
    goto loc_8071DE24;
}

loc_8071DE18:
{
}

loc_8071DE1C:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(128))) {
        goto loc_8071DE24;
    }
}

loc_8071DE20:
{
    r7 = (r7 + -128);
}

loc_8071DE24:
{
    r8 = (r29 + -1);
}

loc_8071DE28:
{
    r25 = (r30 + r6);
    r26 = (r7 * 12);
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_8071DE3C;
    }
}

loc_8071DE34:
{
    r8 = (r8 + 128);
    goto loc_8071DE48;
}

loc_8071DE3C:
{
}

loc_8071DE40:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(128))) {
        goto loc_8071DE48;
    }
}

loc_8071DE44:
{
    r8 = (r8 + -128);
}

loc_8071DE48:
{
}

loc_8071DE4C:
{
    r9 = r29;
    r12 = (r8 * 12);
    r7 = (r30 + r6);
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_8071DE64;
    }
}

loc_8071DE5C:
{
    r9 = (r29 + 128);
    goto loc_8071DE70;
}

loc_8071DE64:
{
}

loc_8071DE68:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(128))) {
        goto loc_8071DE70;
    }
}

loc_8071DE6C:
{
    r9 = (r29 + -128);
}

loc_8071DE70:
{
    r8 = (r28 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r28)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8071DE74:
{
    r10 = (r30 + r6);
    r11 = (r9 * 12);
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_8071DE88;
    }
}

loc_8071DE80:
{
    r8 = (r8 + 128);
    goto loc_8071DE94;
}

loc_8071DE88:
{
}

loc_8071DE8C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(128))) {
        goto loc_8071DE94;
    }
}

loc_8071DE90:
{
    r8 = (r8 + -128);
}

loc_8071DE94:
{
    r9 = (r8 * 12);
}

loc_8071DE9C:
{
    r24 = r28;
    r8 = (r30 + r6);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_8071DEB0;
    }
}

loc_8071DEA8:
{
    r24 = (r28 + 128);
    goto loc_8071DEBC;
}

loc_8071DEB0:
{
}

loc_8071DEB4:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(128))) {
        goto loc_8071DEBC;
    }
}

loc_8071DEB8:
{
    r24 = (r28 + -128);
}

loc_8071DEBC:
{
    addr_lfsx_8071DEBC_loc_0 = (r12 + r7);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DEBC_loc_0);
    r7 = 0x808A0000u;
    addr_lfsx_8071DEC4_loc_0 = (r26 + r25);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DEC4_loc_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071DECC:
{
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8340));
    r7 = (r24 * 12);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r3 = (r30 + r6);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071DEF8;
    }
}

loc_8071DEE8:
{
    addr_lfsx_8071DEE8_loc_0 = (r7 + r3);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DEE8_loc_0);
    addr_lfsx_8071DEEC_loc_0 = (r9 + r8);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DEEC_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    goto loc_8071DF04;
}

loc_8071DEF8:
{
    addr_lfsx_8071DEF8_loc_0 = (r5 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DEF8_loc_0);
    addr_lfsx_8071DEFC_loc_0 = (r7 + r3);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DEFC_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_8071DF04:
{
    r3 = 0x808A0000u;
    r25 = (r4 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8340));
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    r3 = 0x808A0000u;
    f30.d = MemoryInline::FlatReadFloat32((r5 + 8328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8071DF24:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    f31.d = MemoryInline::FlatReadFloat64((r3 + 8344));
    addr_lfsx_8071DF2C_loc_0 = (r11 + r10);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DF2C_loc_0);
    MemoryInline::FlatWriteRam32((r1 + 52), r25);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f30.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    addr_lfsx_8071DF44_loc_0 = (r9 + r8);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DF44_loc_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071E044;
    }
}

loc_8071DF54:
{
    r24 = (r4 * r4);
    r23 = r29;
    r26 = 0x808D0000u;
    goto loc_8071E03C;
}

loc_8071DF64:
{
    r0 = (r23 - r29);
    MemoryInline::FlatWriteRam32((r1 + 52), r25);
    r0 = (r0 ^ -2147483648);
    r4 = r27;
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r5 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    r6 = (r1 + 40);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    r7 = (r1 + 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    r8 = (r1 + 32);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->lr = 0x8071DFA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x8071E07Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
}

loc_8071DFA8:
{
    r0 = r23;
    if ((static_cast<int32_t>(r23) >= static_cast<int32_t>(0))) {
        goto loc_8071DFB8;
    }
}

loc_8071DFB0:
{
    r0 = (r23 + 128);
    goto loc_8071DFC4;
}

loc_8071DFB8:
{
}

loc_8071DFBC:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(128))) {
        goto loc_8071DFC4;
    }
}

loc_8071DFC0:
{
    r0 = (r23 + -128);
}

loc_8071DFC4:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r4 = (r0 * 12);
    r0 = MemoryInline::FlatRead32((r27 + 36));
    f0.d = std::fabs(f3.d);
    r3 = (r30 + r0);
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_8071DFDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071E034;
    }
}

loc_8071DFE0:
{
    SetCRFloatResident(cr, 0, f3.d, f30.d);
}

loc_8071DFE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071E010;
    }
}

loc_8071DFE8:
{
    r0 = (r24 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f29.d));
    f1.d = MemoryInline::FlatReadFloat32((r26 + -27488));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    goto loc_8071E034;
}

loc_8071E010:
{
    r0 = (r24 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f29.d));
    f1.d = MemoryInline::FlatReadFloat32((r26 + -27488));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
}

loc_8071E034:
{
    addr_stfsx_8071E034_loc_0 = (r4 + r3);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8071E034_loc_0, f3.d);
    r23 = (r23 + 1);
}

loc_8071E03C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(r28));
}

loc_8071E040:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8071DF64;
    }
}

loc_8071E044:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_8071E04C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF801FFB gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0xE000000F fpr_write=0xE00000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8071DC94 func_8071DC94 preserves=false fpr_mask=0xE0000000
