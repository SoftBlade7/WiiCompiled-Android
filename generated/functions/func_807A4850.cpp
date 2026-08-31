#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A4850(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
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
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A4850;

loc_807A4850:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x809C0000u;
    r29 = (r29 + 13872);
    ctx->lr = 0x807A4878u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x807A6928u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r5 = 0x808D0000u;
    r7 = 0;
    r5 = (r5 + 7136);
    r6 = -1;
    r0 = (r5 + 56);
    r4 = 0x809C0000u;
    r3 = 0x808A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 452u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 424u, (r31 + 424), static_cast<uint16_t>(r7));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 21752));
    r4 = (r4 + 12104);
    MemoryInline::WriteResolved32(guest_range_0, 428u, (r31 + 428), r6);
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 21756));
    r3 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 432u, (r31 + 432), r7);
    MemoryInline::WriteResolved16(guest_range_0, 436u, (r31 + 436), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 444u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 444u, (r31 + 444), r7);
        MemoryInline::WriteResolved32(guest_range_0, 448u, (r31 + 448), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r5);
    MemoryInline::WriteResolved32(guest_range_0, 420u, (r31 + 420), r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 1108));
    MemoryInline::FlatWriteRamFloat32(r29, f1.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    MemoryInline::FlatWriteRamFloat32((r29 + 4), f0.d);
    f0.d = PpcFmulsInline(f1.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r29 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 2924));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807A48EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A4904;
    }
}

loc_807A48F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A48F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A4910;
    }
}

loc_807A48F8:
{
    r0 = 120;
    MemoryInline::FlatWriteRam32((r29 + 12), r0);
    goto loc_807A4918;
}

loc_807A4904:
{
    r0 = 150;
    MemoryInline::FlatWriteRam32((r29 + 12), r0);
    goto loc_807A4918;
}

loc_807A4910:
{
    r0 = 180;
    MemoryInline::FlatWriteRam32((r29 + 12), r0);
}

loc_807A4918:
{
    r29 = 0x808D0000u;
    r0 = 3;
    r30 = (r29 + 6936);
    MemoryInline::FlatWrite32((r31 + 448), r31);
    r3 = 6;
    MemoryInline::FlatWrite32((r31 + 444), r30);
    MemoryInline::FlatWrite16((r31 + 436), static_cast<uint16_t>(r0));
    ctx->lr = 0x807A4938u;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 440), r3);
    r4 = 65536;
    r0 = (r4 + -1);
    r7 = 0;
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r6 = 1;
    r5 = 2;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 440));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r31 + 440));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 6936));
    r4 = MemoryInline::FlatRead32((r31 + 440));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4_addr_0 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_0, static_cast<uint16_t>(r7));
    r0 = MemoryInline::FlatRead16((r30 + 28));
    r4 = MemoryInline::FlatRead32((r31 + 440));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_1, static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead16((r30 + 56));
    r4 = MemoryInline::FlatRead32((r31 + 440));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_2, static_cast<uint16_t>(r5));
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
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFCF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A4850 func_807A4850 preserves=true fpr_mask=0x00000000
