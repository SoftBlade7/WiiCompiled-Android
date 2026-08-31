#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078AE84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8078AFDC_loc_0 = 0;
    uint32_t addr_lfsx_8078B004_loc_0 = 0;
    uint32_t addr_lfsx_8078B064_loc_0 = 0;
    uint32_t addr_lfsx_8078B090_loc_0 = 0;
    uint32_t addr_lfsx_8078B0F4_loc_0 = 0;
    uint32_t addr_lfsx_8078B11C_loc_0 = 0;
    uint32_t addr_lfsx_8078B154_loc_0 = 0;
    uint32_t addr_lfsx_8078B164_loc_0 = 0;
    uint32_t addr_lfsx_8078B238_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8078AE84;

loc_8078AE84:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 160);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    r22 = 0x808A0000u;
    r4 = 0x809C0000u;
    r5 = 0x809C0000u;
    r21 = r3;
    r22 = (r22 + 18464);
    r3 = (r1 + 44);
    r4 = (r4 + 12048);
    r5 = (r5 + 12072);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r26 = r21;
    f1.d = MemoryInline::FlatReadFloat32((r22 + 252));
    r28 = (r22 + 52);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r27 = (r22 + 64);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r22 + 228));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r29 = (r22 + 4);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r22 + 256));
    r20 = (r22 + 16);
    r0 = MemoryInline::FlatRead32((r1 + 44));
    r23 = 0;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    f31.d = MemoryInline::FlatReadFloat32((r22 + 240));
    r30 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r31 = 0x808B0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f30.d = MemoryInline::FlatReadFloat32(r22);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
}

loc_8078AF50:
{
    r22 = MemoryInline::FlatRead32((r26 + 1184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(42));
}

loc_8078AF58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078B2A4;
    }
}

loc_8078AF5C:
{
    r3 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r21 + 1340));
}

loc_8078AF6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8078B020;
    }
}

loc_8078AF70:
{
}

loc_8078AF74:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8078AF98;
    }
}

loc_8078AF78:
{
    r0 = (r23 + 1);
}

loc_8078AF80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8078AFB4;
    }
}

loc_8078AF84:
{
}

loc_8078AF88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8078AFD0;
    }
}

loc_8078AF8C:
{
}

loc_8078AF90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8078AFF8;
    }
}

loc_8078AF94:
{
    goto loc_8078B134;
}

loc_8078AF98:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_8078B134;
}

loc_8078AFB4:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_8078B134;
}

loc_8078AFD0:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    addr_lfsx_8078AFDC_loc_0 = (r28 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078AFDC_loc_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    goto loc_8078B134;
}

loc_8078AFF8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    addr_lfsx_8078B004_loc_0 = (r28 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078B004_loc_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    goto loc_8078B134;
}

loc_8078B020:
{
}

loc_8078B024:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8078B058;
    }
}

loc_8078B028:
{
    r0 = (r23 + 1);
}

loc_8078B030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8078B084;
    }
}

loc_8078B034:
{
}

loc_8078B038:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8078B0B0;
    }
}

loc_8078B03C:
{
}

loc_8078B040:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8078B0CC;
    }
}

loc_8078B044:
{
}

loc_8078B048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8078B0E8;
    }
}

loc_8078B04C:
{
}

loc_8078B050:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8078B110;
    }
}

loc_8078B054:
{
    goto loc_8078B134;
}

loc_8078B058:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    addr_lfsx_8078B064_loc_0 = (r27 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078B064_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_8078B134;
}

loc_8078B084:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    addr_lfsx_8078B090_loc_0 = (r27 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078B090_loc_0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_8078B134;
}

loc_8078B0B0:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_8078B134;
}

loc_8078B0CC:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_8078B134;
}

loc_8078B0E8:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    addr_lfsx_8078B0F4_loc_0 = (r28 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078B0F4_loc_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    goto loc_8078B134;
}

loc_8078B110:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    addr_lfsx_8078B11C_loc_0 = (r28 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078B11C_loc_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
}

loc_8078B134:
{
    r0 = MemoryInline::FlatRead32((r21 + 1340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8078B13C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078B1D0;
    }
}

loc_8078B140:
{
    r0 = (r23 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8078B148:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078B1D0;
    }
}

loc_8078B14C:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = MemoryInline::FlatRead32((r21 + 1204));
    addr_lfsx_8078B154_loc_0 = (r29 + r0);
    f29.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078B154_loc_0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    addr_lfsx_8078B164_loc_0 = (r29 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078B164_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f29.d, f30.d);
}

loc_8078B184:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8078B1D0;
    }
}

loc_8078B188:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078B1A4;
    }
}

loc_8078B190:
{
    r3 = (r30 + 22260);
    r5 = (r31 + 22224);
    r4 = 627;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8078B1A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8078B1A4:
{
    SetCRFloatResident(cr, 0, f29.d, f30.d);
}

loc_8078B1A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078B1B8;
    }
}

loc_8078B1B0:
{
    f1.d = f30.d;
    goto loc_8078B1C4;
}

loc_8078B1B8:
{
    f1.d = f29.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f1.d = PpcFmulsInline(f29.d, f1.d);
}

loc_8078B1C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
}

loc_8078B1D0:
{
    r3 = (r1 + 56);
    r4 = (r1 + 20);
    // inline leaf 0x802302C4 (18 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f0.d);
    // end of inlined leaf 0x802302C4
    r24 = (r21 + r22);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r0 = MemoryInline::FlatRead8((r24 + 1140));
    r25 = (r21 + r3);
    r19 = 0;
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r25 + r0);
    r18 = MemoryInline::FlatRead32((r3 + 132));
}

loc_8078B1FC:
{
    r3 = MemoryInline::FlatRead32((r18 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8078B208:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078B218;
    }
}

loc_8078B20C:
{
    r5 = (r1 + 56);
    r4 = 0;
    ctx->lr = 0x8078B218u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_8078B218:
{
    r19 = (r19 + 1);
    r18 = (r18 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(2));
}

loc_8078B224:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8078B1FC;
    }
}

loc_8078B228:
{
    r3 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r1 + 56);
    addr_lfsx_8078B238_loc_0 = (r20 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8078B238_loc_0);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r5 = (r1 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // inline leaf 0x802300C8 (20 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    f6.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteRamFloat32(r3, f6.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 32), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 36), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 24), f5.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x802300C8
    r0 = MemoryInline::FlatRead8((r24 + 1140));
    r19 = 0;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3 = (r25 + r0);
    r22 = MemoryInline::FlatRead32((r3 + 468));
}

loc_8078B268:
{
    r3 = MemoryInline::FlatRead32((r22 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8078B274:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078B284;
    }
}

loc_8078B278:
{
    r5 = (r1 + 56);
    r4 = 0;
    ctx->lr = 0x8078B284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DB90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_8078B284:
{
    r19 = (r19 + 1);
    r22 = (r22 + 4);
}

loc_8078B290:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(2))) {
        goto loc_8078B268;
    }
}

loc_8078B294:
{
    r23 = (r23 + 1);
    r26 = (r26 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(6));
}

loc_8078B2A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8078AF50;
    }
}

loc_8078B2A4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 160);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8078AE84 func_8078AE84 preserves=false fpr_mask=0xE0000000
