#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D34D4(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805D34D4;

loc_805D34D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r0 = MemoryInline::FlatRead32((r3 + 124));
}

loc_805D34FC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805D35E0;
    }
}

loc_805D3500:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805D3510:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D369C;
    }
}

loc_805D3514:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_805D3520:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_805D352C;
    }
}

loc_805D3524:
{
}

loc_805D3528:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(6))) {
        goto loc_805D35E0;
    }
}

loc_805D352C:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_805D353C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(6))) {
        goto loc_805D3560;
    }
}

loc_805D3540:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FDC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 30076));
    // end of inlined leaf 0x80668FDC
}

loc_805D354C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_805D3560;
    }
}

loc_805D3550:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213B8 (5 guest instruction(s))
    r4 = 6;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806213B8
}

loc_805D3560:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 124u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 108u, (r31 + 112));
    r4 = (r31 + 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r31 + 124));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 4));
    r0 = (r0 * 472);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r31 + 104));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 104u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved16(guest_range_0, 104u, (r31 + 108));
            r7 = MemoryInline::ReadResolved16(guest_range_0, 106u, (r31 + 110));
        }
    }
    r3 = (r3 + r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 92u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r31 + 96));
            r10 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r31 + 100));
        }
    }
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80519980u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r3 = 0x809C0000u;
    r5 = 1;
    r6 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805D35AC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805D35CC;
    }
}

loc_805D35B0:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r6 + r0);
    r3 = (r3 + 56);
    goto loc_805D35D0;
}

loc_805D35CC:
{
    r3 = 0;
}

loc_805D35D0:
{
    r3 = (r3 + 65536);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + -27751), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 120), static_cast<uint8_t>(r0));
}

loc_805D35E0:
{
    r3 = MemoryInline::FlatRead32((r31 + 124));
    r30 = 0x809C0000u;
    r28 = (r3 + 1);
    r29 = (r28 * 472);
    goto loc_805D366C;
}

loc_805D35F4:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r0 + r29);
    r3 = MemoryInline::FlatRead16((r3 + 32));
    r0 = (r3 & 1);
}

loc_805D3604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D3610;
    }
}

loc_805D3608:
{
    r0 = 0;
    goto loc_805D3620;
}

loc_805D3610:
{
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D3614:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D3620;
    }
}

loc_805D361C:
{
    r0 = 1;
}

loc_805D3620:
{
}

loc_805D3624:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_805D3664;
    }
}

loc_805D3628:
{
    r3 = MemoryInline::FlatRead32((r30 + 8464));
    r4 = r28;
    ctx->lr = 0x805D3634u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066375Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805D3638:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D3664;
    }
}

loc_805D363C:
{
    r0 = (r28 * 472);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    r5 = (r31 + 16);
    r4 = (r4 + r0);
    r6 = 1;
    ctx->lr = 0x805D365Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806742D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 124), r28);
    goto loc_805D369C;
}

loc_805D3664:
{
    r29 = (r29 + 472);
    r28 = (r28 + 1);
}

loc_805D366C:
{
}

loc_805D3670:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(30))) {
        goto loc_805D35F4;
    }
}

loc_805D3674:
{
    r0 = MemoryInline::FlatRead8((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D367C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D369C;
    }
}

loc_805D3680:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805D3694u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r0));
}

loc_805D369C:
{
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805D34D4 func_805D34D4 preserves=true fpr_mask=0x00000000
