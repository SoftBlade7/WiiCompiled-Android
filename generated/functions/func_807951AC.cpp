#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807951AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807951AC;

loc_807951AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = r4;
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r6 = r31;
    r7 = MemoryInline::FlatRead32((r3 + 80));
    ctr = r7;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_807951D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807952C8;
    }
}

loc_807951DC:
{
    r0 = MemoryInline::FlatRead32((r6 + 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_807951E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807952BC;
    }
}

loc_807951E8:
{
    r0 = MemoryInline::FlatRead32((r4 + 124));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807951F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079523C;
    }
}

loc_807951F4:
{
    r0 = (r7 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807951F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80795210;
    }
}

loc_807951FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80795200:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80795220;
    }
}

loc_80795204:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80795208:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80795230;
    }
}

loc_8079520C:
{
    goto loc_8079523C;
}

loc_80795210:
{
    r0 = MemoryInline::FlatRead32((r4 + 120));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r4 + 120), r0);
    goto loc_8079523C;
}

loc_80795220:
{
    r0 = MemoryInline::FlatRead32((r4 + 120));
    r0 = (r0 | 268435456);
    MemoryInline::FlatWrite32((r4 + 120), r0);
    goto loc_8079523C;
}

loc_80795230:
{
    r0 = MemoryInline::FlatRead32((r4 + 120));
    r0 = (r0 | 536870912);
    MemoryInline::FlatWrite32((r4 + 120), r0);
}

loc_8079523C:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r6 = 0x808D0000u;
    r6 = (r6 + 6448);
    r4 = r8;
    r0 = (r0 * 12);
    r3 = r31;
    r12 = (r1 + 8);
    r8 = (r6 + r0);
    r6_addr_1 = (r6 + r0);
    r7 = MemoryInline::FlatRead32(r6_addr_1);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x80795278u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // nop
    r0 = MemoryInline::FlatRead32((r31 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80795284:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807952C8;
    }
}

loc_80795288:
{
    r0 = 0;
    r5 = 16;
    r4 = 20;
    r3 = 4;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 20), 0, 68u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 24), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r31 + 80), r0);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r31 + 84), r0);
    }
    goto loc_807952C8;
}

loc_807952BC:
{
    r6 = (r6 + 4);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807951DC;
    }
}

loc_807952C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
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
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0x800019FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807951AC func_807951AC preserves=true fpr_mask=0x00000000
