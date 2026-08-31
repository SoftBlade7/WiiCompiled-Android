#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80563DB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80563DB0;

loc_80563DB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_80563DBC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 4u, true, false);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0 = MemoryInline::FlatRead8((r9 + 20));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r9 + 20), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 20));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80563E38;
    }
}

loc_80563E04:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 20));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 20));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    goto loc_80563E68;
}

loc_80563E38:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 20));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 20));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
}

loc_80563E68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80563E6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80563EB0;
    }
}

loc_80563E70:
{
    r10 = 0x80890000u;
    r10 = (r10 + 5308);
    r9 = MemoryInline::FlatRead8(r10);
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r9));
    r8 = MemoryInline::FlatRead8((r10 + 1));
    r5 = (r1 + 8);
    r7 = MemoryInline::FlatRead8((r10 + 2));
    r4 = 2;
    r0 = MemoryInline::FlatRead8((r10 + 3));
    r6 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 6216));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->lr = 0x80563EB0u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023DE7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80563EB0:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = r29;
    r5 = r30;
    r6 = r31;
    r7 = -1;
    ctx->lr = 0x80563EC8u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80214C74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80563DB0 func_80563DB0 preserves=true fpr_mask=0x00000000
