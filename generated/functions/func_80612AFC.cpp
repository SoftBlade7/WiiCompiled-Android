#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80612AFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_80612AFC;

loc_80612AFC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r8 = 1127219200;
    r7 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r0 = (r5 + r0);
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r3 = (r3 + 131072);
    r0 = (r0 * 192);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 29424));
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r6;
    f4.d = MemoryInline::FlatReadFloat64((r4 + 29432));
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = 1;
    r5 = MemoryInline::FlatRead32((r3 + -14720));
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 29428));
    r3 = (r6 + 32);
    r31 = (r5 + r0);
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 31u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r6, r0);
    r4 = (r31 + 16);
    r5 = 76;
    r11 = MemoryInline::FlatRead16((r31 + 4));
    r10 = MemoryInline::FlatRead16((r31 + 6));
    r0 = (r11 * 60);
    r12 = MemoryInline::FlatRead16((r31 + 8));
    r9 = (r10 & 255);
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r6 + 16), static_cast<uint16_t>(r12));
    r0 = (r9 + r0);
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r6 + 18), static_cast<uint8_t>(r29));
    r0 = (r0 * 1000);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r6 + 12), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r6 + 14), static_cast<uint8_t>(r10));
    r9 = (r12 + r0);
    r10 = MemoryInline::FlatRead16((r31 + 10));
    r11 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r10 * 60);
    r12 = MemoryInline::FlatRead16((r31 + 14));
    r7 = (r11 & 255);
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    r0 = (r7 + r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    r0 = (r0 * 1000);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r8);
    r0 = (r12 + r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r6 + 30), static_cast<uint8_t>(r29));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r6 + 24), static_cast<uint16_t>(r10));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r6 + 26), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r6 + 28), static_cast<uint16_t>(r12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r6 + 4), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r6 = -1;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 108), r6);
    r3 = (r30 + 124);
    r4 = (r31 + 92);
    r5 = 100;
    MemoryInline::FlatWrite32((r30 + 112), r6);
    MemoryInline::FlatWrite32((r30 + 116), r6);
    MemoryInline::FlatWrite8((r30 + 120), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000007A gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80612AFC func_80612AFC preserves=true fpr_mask=0x00000000
