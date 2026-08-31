#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80738ED4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80738ED4;

loc_80738ED4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -20544);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWrite32((r3 + 16), r4);
    ctx->lr = 0x80738EF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8021A0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 0x808D0000u;
    r0 = 0;
    r3 = -1;
    guest_range_2 = MemoryInline::ResolveRangeHost(r31, 0, 156u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r31 + 20), r3);
    r5 = (r5 + -20532);
    r4 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_2, 0u, r31, r5);
    r5 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r31 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r31 + 28), r3);
    }
    MemoryInline::WriteResolved8(guest_range_2, 32u, (r31 + 32), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 132u, (r31 + 132), r0);
        MemoryInline::WriteResolved32(guest_range_2, 136u, (r31 + 136), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 140u, (r31 + 140), r0);
        MemoryInline::WriteResolved32(guest_range_2, 144u, (r31 + 144), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 148u, (r31 + 148), r0);
        MemoryInline::WriteResolved32(guest_range_2, 152u, (r31 + 152), r0);
    }
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r31 + 20), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80738F54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80738F60;
    }
}

loc_80738F58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80738F5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80738F64;
    }
}

loc_80738F60:
{
    r5 = 1;
}

loc_80738F64:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 32), 0, 100u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r31 + 32), static_cast<uint8_t>(r5));
    r0 = 0;
    r3 = r31;
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r31 + 36), r0);
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r31 + 84), r0);
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r31 + 40), r0);
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r31 + 88), r0);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r31 + 44), r0);
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r31 + 92), r0);
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r31 + 48), r0);
    MemoryInline::WriteResolved32(guest_range_3, 64u, (r31 + 96), r0);
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r31 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r31 + 100), r0);
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r31 + 56), r0);
    MemoryInline::WriteResolved32(guest_range_3, 72u, (r31 + 104), r0);
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r31 + 60), r0);
    MemoryInline::WriteResolved32(guest_range_3, 76u, (r31 + 108), r0);
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r31 + 64), r0);
    MemoryInline::WriteResolved32(guest_range_3, 80u, (r31 + 112), r0);
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r31 + 68), r0);
    MemoryInline::WriteResolved32(guest_range_3, 84u, (r31 + 116), r0);
    MemoryInline::WriteResolved32(guest_range_3, 40u, (r31 + 72), r0);
    MemoryInline::WriteResolved32(guest_range_3, 88u, (r31 + 120), r0);
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r31 + 76), r0);
    MemoryInline::WriteResolved32(guest_range_3, 92u, (r31 + 124), r0);
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r31 + 80), r0);
    MemoryInline::WriteResolved32(guest_range_3, 96u, (r31 + 128), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073999Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = 20;
    ctx->lr = 0x80738FDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80738FE0:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80738FF4;
    }
}

loc_80738FE8:
{
    r4 = MemoryInline::FlatRead32((r31 + 28));
    ctx->lr = 0x80738FF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073AB68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r3;
}

loc_80738FF4:
{
    MemoryInline::FlatWrite32((r31 + 140), r4);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWrite32((r31 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807397BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073900C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739028;
    }
}

loc_80739010:
{
    r3 = 404;
    ctx->lr = 0x80739018u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073901C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739024;
    }
}

loc_80739020:
{
    ctx->lr = 0x80739024u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80740D1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80739024:
{
    MemoryInline::FlatWrite32((r31 + 132), r3);
}

loc_80739028:
{
    r3 = 56;
    ctx->lr = 0x80739030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80739034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073903C;
    }
}

loc_80739038:
{
    // inline leaf 0x8073C2C0 (18 guest instruction(s))
    r4 = 0x808D0000u;
    r0 = 0;
    r4 = (r4 + -20428);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
    }
    // end of inlined leaf 0x8073C2C0
}

loc_8073903C:
{
    MemoryInline::FlatWrite32((r31 + 136), r3);
    r3 = 52;
    ctx->lr = 0x80739048u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8073904C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80739054;
    }
}

loc_80739050:
{
    // inline leaf 0x80739D38 (17 guest instruction(s))
    r4 = 0x808D0000u;
    r0 = 0;
    r4 = (r4 + -20512);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 44), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r0);
    // end of inlined leaf 0x80739D38
}

loc_80739054:
{
    MemoryInline::FlatWrite32((r31 + 144), r3);
    r3 = 0x809C0000u;
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_8073906C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80739074;
    }
}

loc_80739070:
{
    r0 = 1;
}

loc_80739074:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80739078:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739094;
    }
}

loc_8073907C:
{
    r3 = 208;
    ctx->lr = 0x80739084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80739088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739090;
    }
}

loc_8073908C:
{
    ctx->lr = 0x80739090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80727788u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80739090:
{
    MemoryInline::FlatWrite32((r31 + 148), r3);
}

loc_80739094:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80738ED4 func_80738ED4 preserves=true fpr_mask=0x00000000
