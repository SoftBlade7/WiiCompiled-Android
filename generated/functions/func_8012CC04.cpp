#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012CC04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012CC04;

loc_8012CC04:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 48u, (r1 + 48), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 208), 0, 52u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 208));
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
}

loc_8012CC3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012CC48;
    }
}

loc_8012CC40:
{
    r3 = 0;
    goto loc_8012CE84;
}

loc_8012CC48:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 216));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27100));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8012CC54:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012CC64;
    }
}

loc_8012CC58:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 212));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012CC60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012CC6C;
    }
}

loc_8012CC64:
{
    r3 = 0;
    goto loc_8012CE84;
}

loc_8012CC6C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 220));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_8012CC74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012CC80;
    }
}

loc_8012CC78:
{
    r3 = 0;
    goto loc_8012CE84;
}

loc_8012CC80:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 224));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012CC88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012CC94;
    }
}

loc_8012CC8C:
{
    r3 = 0;
    goto loc_8012CE84;
}

loc_8012CC94:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 228));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012CC9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012CCAC;
    }
}

loc_8012CCA0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27096));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012CCA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012CCB4;
    }
}

loc_8012CCAC:
{
    r3 = 0;
    goto loc_8012CE84;
}

loc_8012CCB4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 232));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012CCBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012CCC8;
    }
}

loc_8012CCC0:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012CCC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012CCD0;
    }
}

loc_8012CCC8:
{
    r3 = 0;
    goto loc_8012CE84;
}

loc_8012CCD0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 236));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012CCD8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012CCE4;
    }
}

loc_8012CCDC:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012CCE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012CCEC;
    }
}

loc_8012CCE4:
{
    r3 = 0;
    goto loc_8012CE84;
}

loc_8012CCEC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 240));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012CCF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012CD00;
    }
}

loc_8012CCF8:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012CCFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012CD08;
    }
}

loc_8012CD00:
{
    r3 = 0;
    goto loc_8012CE84;
}

loc_8012CD08:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 252));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012CD10:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012CD1C;
    }
}

loc_8012CD14:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012CD18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012CD24;
    }
}

loc_8012CD1C:
{
    r3 = 0;
    goto loc_8012CE84;
}

loc_8012CD24:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r3 + 256));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012CD2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012CD38;
    }
}

loc_8012CD30:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012CD34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012CD40;
    }
}

loc_8012CD38:
{
    r3 = 0;
    goto loc_8012CE84;
}

loc_8012CD40:
{
    r0 = 0;
    r4 = 0x80280000u;
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + 7184);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
}

loc_8012CD58:
{
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8012CD70;
    }
}

loc_8012CD64:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27080));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    goto loc_8012CD78;
}

loc_8012CD70:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27076));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
}

loc_8012CD78:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27104));
    r28 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 216));
    MemoryInline::FlatWrite32((r3 + 48), r28);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r29 = 0x80280000u;
    MemoryInline::FlatWrite32((r31 + 52), r3);
    f29.d = MemoryInline::FlatReadFloat64((r2 + -27048));
    r27 = r31;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -27072));
    r29 = (r29 + 7216);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -27104));
    r25 = 0;
    r26 = 0;
    r30 = 1127219200;
}

loc_8012CDB8:
{
    MemoryInline::FlatWrite32((r27 + 92), r28);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -27064));
    r0 = MemoryInline::FlatRead32((r31 + 220));
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r0 = (r26 + r0);
    r29_addr_2 = (r29 + r0);
    r0 = MemoryInline::FlatRead32(r29_addr_2);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWrite32((r27 + 100), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 224));
    f2.d = PpcFmulsInline(f30.d, f2.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x8012CDF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
}

loc_8012CE04:
{
    r26 = (r26 + 4);
    MemoryInline::FlatWriteFloat32((r27 + 116), f0.d);
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012CDB8;
    }
}

loc_8012CE14:
{
    r0 = MemoryInline::FlatRead32((r31 + 220));
    r4 = 0;
    r3 = 0x80280000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 156), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 156), r4);
    r3 = (r3 + 7216);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27096));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 232));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 164), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27056));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 160), r4);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 228));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012CE58:
{
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 168), r0);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 180), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 200), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012CE6C;
    }
}

loc_8012CE68:
{
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 200), f0.d);
}

loc_8012CE6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27100));
    r3 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 184), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 188), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 192), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 196), f0.d);
    }
}

loc_8012CE84:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 84u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 60u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 44u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 28u, (r1 + 48));
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 80u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012CC04 func_8012CC04 preserves=false fpr_mask=0xE0000000
