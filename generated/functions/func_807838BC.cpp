#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807838BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807838BC;

loc_807838BC:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r0 = (r31 * 240);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead8((r3 + 46));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_807838F0;
    }
}

loc_807838DC:
{
    r3 = 0x809C0000u;
    r0 = (r5 * 236);
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + r0);
    r4 = (r3 + 4);
}

loc_807838F0:
{
}

loc_807838F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80783978;
    }
}

loc_807838F8:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80783900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783918;
    }
}

loc_80783904:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80783914u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8078391C;
}

loc_80783918:
{
    r3 = -1;
}

loc_8078391C:
{
}

loc_80783920:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80783978;
    }
}

loc_80783924:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80783934:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783978;
    }
}

loc_80783938:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783954;
    }
}

loc_8078393C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80783940:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783970;
    }
}

loc_80783944:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783964;
    }
}

loc_80783948:
{
}

loc_8078394C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80783964;
    }
}

loc_80783950:
{
    goto loc_80783978;
}

loc_80783954:
{
}

loc_80783958:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(11))) {
        goto loc_80783978;
    }
}

loc_8078395C:
{
}

loc_80783960:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_80783970;
    }
}

loc_80783964:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 48), static_cast<uint8_t>(r0));
    goto loc_80783978;
}

loc_80783970:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 49), static_cast<uint8_t>(r0));
}

loc_80783978:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 16));
    r3 = 0x809C0000u;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r1 + 24));
        }
    }
    MemoryInline::FlatWrite32((r30 + 52), r5);
    MemoryInline::FlatWrite32((r30 + 56), r4);
    MemoryInline::FlatWrite32((r30 + 60), r0);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807839A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807839E8;
    }
}

loc_807839A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807839AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807839C8;
    }
}

loc_807839B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807839B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807839C8;
    }
}

loc_807839B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_807839BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807839C8;
    }
}

loc_807839C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_807839C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807839E8;
    }
}

loc_807839C8:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 18372));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
}

loc_807839E8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r1 + 52));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r1 + 44));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 36));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r1 + 32));
        }
    }
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807838BC func_807838BC preserves=true fpr_mask=0x00000000
