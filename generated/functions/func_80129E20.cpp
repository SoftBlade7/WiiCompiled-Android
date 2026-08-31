#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80129E20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80129FB8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80129E20;

loc_80129E20:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
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
    // end of inlined leaf 0x80021594
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 320), 0, 56u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 320));
    r31 = 0x80280000u;
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
}

loc_80129E5C:
{
    r31 = (r31 + 6592);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80129E6C;
    }
}

loc_80129E64:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129E6C:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 328));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27276));
    SetCRFloatResident(cr, 0, f4.d, f2.d);
}

loc_80129E78:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80129E88;
    }
}

loc_80129E7C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r3 + 324));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80129E84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80129E90;
    }
}

loc_80129E88:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129E90:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 332));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_80129E98:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80129EA4;
    }
}

loc_80129E9C:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129EA4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 336));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80129EAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80129EB8;
    }
}

loc_80129EB0:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129EB8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r3 + 340));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80129EC0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80129ED0;
    }
}

loc_80129EC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27272));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80129ECC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80129ED8;
    }
}

loc_80129ED0:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129ED8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r3 + 344));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80129EE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80129EEC;
    }
}

loc_80129EE4:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80129EE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80129EF4;
    }
}

loc_80129EEC:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129EF4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r3 + 348));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80129EFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80129F08;
    }
}

loc_80129F00:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80129F04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80129F10;
    }
}

loc_80129F08:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129F10:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r3 + 352));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80129F18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80129F24;
    }
}

loc_80129F1C:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80129F20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80129F2C;
    }
}

loc_80129F24:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129F2C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r3 + 356));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80129F34:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80129F40;
    }
}

loc_80129F38:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80129F3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80129F48;
    }
}

loc_80129F40:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129F48:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r3 + 368));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80129F50:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80129F5C;
    }
}

loc_80129F54:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80129F58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80129F64;
    }
}

loc_80129F5C:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129F64:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r3 + 372));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80129F6C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80129F78;
    }
}

loc_80129F70:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80129F74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80129F80;
    }
}

loc_80129F78:
{
    r3 = 0;
    goto loc_8012A124;
}

loc_80129F80:
{
    r8 = (r4 * 12);
    r9 = (r31 + 0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27280));
    r5 = (r31 + 96);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27268));
    r27 = 0;
    r7 = (r9 + r8);
    f1.d = PpcFmulsInline(f0.d, f4.d);
    r6 = MemoryInline::FlatRead32((r7 + 8));
    r4 = (r5 + r8);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 28), r6);
    r9_addr_1 = (r9 + r8);
    r0 = MemoryInline::FlatRead32(r9_addr_1);
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 16), r0);
    addr_lfsx_80129FB8_loc_0 = (r5 + r8);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80129FB8_loc_0);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 36), f0.d);
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 40), f0.d);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r6 - r0);
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 24), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r3 + 64), r27);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 44), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r30 + 68), r3);
    r26 = r30;
    f29.d = MemoryInline::FlatReadFloat64((r2 + -27224));
    r28 = (r31 + 192);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -27248));
    r24 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -27280));
    r25 = 0;
    r29 = 1127219200;
}

loc_8012A02C:
{
    MemoryInline::FlatWrite32((r26 + 124), r27);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -27240));
    r0 = MemoryInline::FlatRead32((r30 + 332));
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r0 = (r0 * 36);
    r0 = (r25 + r0);
    r28_addr_2 = (r28 + r0);
    r0 = MemoryInline::FlatRead32(r28_addr_2);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWrite32((r26 + 136), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 336));
    f2.d = PpcFmulsInline(f30.d, f2.d);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->lr = 0x8012A06Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r24 = (r24 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(3));
}

loc_8012A078:
{
    r25 = (r25 + 4);
    MemoryInline::FlatWriteFloat32((r26 + 160), f0.d);
    r26 = (r26 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012A02C;
    }
}

loc_8012A088:
{
    r0 = MemoryInline::FlatRead32((r30 + 332));
    r4 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 204), 0, 112u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r30 + 204), r4);
    r3 = (r31 + 192);
    r0 = (r0 * 36);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27272));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 344));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27232));
    r3 = (r3 + r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 340));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r30 + 212), r0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012A0C0:
{
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r30 + 208), r4);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r30 + 216), r0);
    MemoryInline::WriteResolved32(guest_range_3, 40u, (r30 + 244), r4);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r30 + 260), r0);
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r30 + 248), r4);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r30 + 264), r0);
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r30 + 252), r4);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::WriteResolved32(guest_range_3, 64u, (r30 + 268), r0);
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r30 + 256), r4);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r30 + 272), r0);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 88u, (r30 + 292), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 108u, (r30 + 312), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012A10C;
    }
}

loc_8012A108:
{
    MemoryInline::WriteResolvedFloat32(guest_range_3, 108u, (r30 + 312), f0.d);
}

loc_8012A10C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27276));
    r3 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 92u, (r30 + 296), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 96u, (r30 + 300), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 100u, (r30 + 304), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 104u, (r30 + 308), f0.d);
    }
}

loc_8012A124:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF003FFF gpr_write=0xFF001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80129E20 func_80129E20 preserves=false fpr_mask=0xE0000000
