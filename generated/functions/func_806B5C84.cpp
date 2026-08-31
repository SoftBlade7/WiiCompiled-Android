#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B5C84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806B5C84;

loc_806B5C84:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    r5 = (r6 + -3744);
    ctx->lr = 0x806B5CB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081EFECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = 0x808C0000u;
    r7 = 0;
    r6 = (r6 + 8364);
    r5 = -1;
    r4 = (r6 + 236);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 223u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r30 + 184), r5);
    r3 = 0x808A0000u;
    r0 = 1127219200;
    MemoryInline::WriteResolved16(guest_range_0, 180u, (r30 + 180), static_cast<uint16_t>(r7));
    r5 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -3784));
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r30 + 188), r7);
    MemoryInline::WriteResolved16(guest_range_0, 192u, (r30 + 192), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r30 + 200), r7);
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r30 + 204), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r6);
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 176), r4);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r30 + 208), r29);
    r3 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead16((r3 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 212u, (r30 + 212), f0.d);
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    MemoryInline::WriteResolved8(guest_range_0, 222u, (r30 + 222), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r5 + 8696));
    r0 = MemoryInline::FlatRead16((r3 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_806B5D44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B5D50;
    }
}

loc_806B5D48:
{
    r4 = r7;
    MemoryInline::FlatWriteRam32((r5 + 8696), r7);
}

loc_806B5D50:
{
    MemoryInline::FlatWrite32((r30 + 216), r4);
    r5 = 0x809C0000u;
    r29 = 0x808C0000u;
    r0 = 2;
    r4 = MemoryInline::FlatRead32((r5 + 8696));
    r31 = (r29 + 8048);
    r3 = 4;
    r4 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + 8696), r4);
    MemoryInline::FlatWrite32((r30 + 204), r30);
    MemoryInline::FlatWrite32((r30 + 200), r31);
    MemoryInline::FlatWrite16((r30 + 192), static_cast<uint16_t>(r0));
    ctx->lr = 0x806B5D84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 196), r3);
    r4 = 65536;
    r0 = (r4 + -1);
    r6 = 0;
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r5 = 1;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r30 + 196));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 8048));
    r4 = MemoryInline::FlatRead32((r30 + 196));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_0 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_0, static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead16((r31 + 28));
    r4 = MemoryInline::FlatRead32((r30 + 196));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_1, static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r30 + 240), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(14));
}

loc_806B5DD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B5DFC;
    }
}

loc_806B5DDC:
{
    r4 = 0x809C0000u;
    r3 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r4 + 17200));
    r3 = (r3 + -3744);
    r4 = (r3 + 9);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    ctx->lr = 0x806B5DF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082C178u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite16((r30 + 220), static_cast<uint16_t>(r3));
}

loc_806B5DFC:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806B5C84 func_806B5C84 preserves=true fpr_mask=0x00000000
