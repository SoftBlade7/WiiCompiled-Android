#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072EA74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8072EA74;

loc_8072EA74:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x8072EA8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80730420u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9792));
    r3 = 0x809C0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 244), 0, 53u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 272), f0.d);
    r4 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 276), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r31 + 280), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r31 + 284), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + 288), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r31 + 292), r0);
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r31 + 296), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    // inline leaf 0x80739310 (4 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 84));
    // end of inlined leaf 0x80739310
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 244), r3);
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x8072EAD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8072624Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072EAD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072EB50;
    }
}

loc_8072EADC:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 11664));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072EAE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072EB18;
    }
}

loc_8072EAEC:
{
    MemoryInline::FlatWrite32((r31 + 240), r0);
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r5 = 0x809C0000u;
    r4 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r5 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 240));
    ctx->lr = 0x8072EB18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8076C328u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8072EB18:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8072EB28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072EB40;
    }
}

loc_8072EB2C:
{
    r12 = MemoryInline::FlatRead32((r31 + 52));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 108));
    ctr = r12;
    ctx->lr = 0x8072EB40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8072EB40:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    ctx->lr = 0x8072EB50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D3E68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8072EB50:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9792));
    MemoryInline::FlatWriteFloat32((r31 + 256), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 252), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 248), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 268), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 264), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 260), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072EA74 func_8072EA74 preserves=true fpr_mask=0x00000000
