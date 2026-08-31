#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083AC54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8083AC54;

loc_8083AC54:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = (r3 + 36);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    // inline leaf 0x805C2AC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x805C2AC0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8083AC74:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083AC84;
    }
}

loc_8083AC7C:
{
    r30 = 0;
    goto loc_8083ACD4;
}

loc_8083AC84:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7812);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083ACD0;
    }
}

loc_8083AC90:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8083ACA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8083ACB8;
}

loc_8083ACA4:
{
}

loc_8083ACA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_8083ACB4;
    }
}

loc_8083ACAC:
{
    r0 = 1;
    goto loc_8083ACC4;
}

loc_8083ACB4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8083ACB8:
{
}

loc_8083ACBC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8083ACA4;
    }
}

loc_8083ACC0:
{
    r0 = 0;
}

loc_8083ACC4:
{
}

loc_8083ACC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083ACD0;
    }
}

loc_8083ACCC:
{
    goto loc_8083ACD4;
}

loc_8083ACD0:
{
    r30 = 0;
}

loc_8083ACD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8083ACD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083ACE4;
    }
}

loc_8083ACDC:
{
    r30 = 0;
    goto loc_8083AD38;
}

loc_8083ACE4:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7016);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083AD34;
    }
}

loc_8083ACF0:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8083AD04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8083AD1C;
}

loc_8083AD08:
{
}

loc_8083AD0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_8083AD18;
    }
}

loc_8083AD10:
{
    r0 = 1;
    goto loc_8083AD28;
}

loc_8083AD18:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8083AD1C:
{
}

loc_8083AD20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8083AD08;
    }
}

loc_8083AD24:
{
    r0 = 0;
}

loc_8083AD28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8083AD2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083AD34;
    }
}

loc_8083AD30:
{
    goto loc_8083AD38;
}

loc_8083AD34:
{
    r30 = 0;
}

loc_8083AD38:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8083AC54 func_8083AC54 preserves=true fpr_mask=0x00000000
