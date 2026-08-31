#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806DB184(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806DB184;

loc_806DB184:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r5 = (r5 + 988);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    ctx->lr = 0x806DB1B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081EFECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r8 = 0x808C0000u;
    r30 = 0;
    r8 = (r8 + 24080);
    r4 = 1127219200;
    r7 = (r8 + 236);
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 220u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r29 + 184), r0);
    r5 = 0x808A0000u;
    r6 = MemoryInline::FlatRead32((r29 + 160));
    r3 = 0x808A0000u;
    MemoryInline::WriteResolved16(guest_range_0, 180u, (r29 + 180), static_cast<uint16_t>(r30));
    r28 = 0x808C0000u;
    f2.d = MemoryInline::FlatReadFloat64((r5 + 928));
    r31 = (r28 + 23968);
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r29 + 188), r30);
    r0 = 4;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 924));
    r3 = 8;
    MemoryInline::WriteResolved16(guest_range_0, 192u, (r29 + 192), static_cast<uint16_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r29 + 200), r30);
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r29 + 204), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r29, r8);
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r29 + 176), r7);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r5 = MemoryInline::FlatRead16((r5 + 42));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 208u, (r29 + 208), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r4 = MemoryInline::FlatRead16((r5 + 46));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 216u, (r29 + 216), f0.d);
    r4 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead16((r4 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 204u, (r29 + 204), r29);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::WriteResolved32(guest_range_0, 200u, (r29 + 200), r31);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::WriteResolved16(guest_range_0, 192u, (r29 + 192), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 212u, (r29 + 212), f0.d);
    ctx->lr = 0x806DB270u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 196), r3);
    r4 = 65536;
    r5 = (r4 + -1);
    r8 = 1;
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r5));
    r7 = 2;
    r6 = 3;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r29 + 196));
    r0 = 0;
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead32((r29 + 196));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead32((r29 + 196));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead16((r28 + 23968));
    r5 = MemoryInline::FlatRead32((r29 + 196));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r5_addr_0 = (r5 + r4);
    MemoryInline::FlatWrite16(r5_addr_0, static_cast<uint16_t>(r30));
    r4 = MemoryInline::FlatRead16((r31 + 28));
    r5 = MemoryInline::FlatRead32((r29 + 196));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r5_addr_1 = (r5 + r4);
    MemoryInline::FlatWrite16(r5_addr_1, static_cast<uint16_t>(r8));
    r4 = MemoryInline::FlatRead16((r31 + 56));
    r5 = MemoryInline::FlatRead32((r29 + 196));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & -2);
    r5_addr_2 = (r5 + r4);
    MemoryInline::FlatWrite16(r5_addr_2, static_cast<uint16_t>(r7));
    r4 = MemoryInline::FlatRead16((r31 + 84));
    r5 = MemoryInline::FlatRead32((r29 + 196));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & -2);
    r5_addr_3 = (r5 + r4);
    MemoryInline::FlatWrite16(r5_addr_3, static_cast<uint16_t>(r6));
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead8((r3 + 85));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806DB2F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806DB314;
    }
}

loc_806DB2FC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2944));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_806DB30C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806DB314;
    }
}

loc_806DB310:
{
    r0 = 1;
}

loc_806DB314:
{
    MemoryInline::FlatWrite8((r29 + 260), static_cast<uint8_t>(r0));
    r3 = r29;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF9F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFF000 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806DB184 func_806DB184 preserves=true fpr_mask=0x00000000
