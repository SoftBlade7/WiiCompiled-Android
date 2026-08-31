#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081F66C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8081F66C;

loc_8081F66C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r5;
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -17768));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8081F69C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8081F6D0;
    }
}

loc_8081F6A0:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_8081F6A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_8081F6B8;
    }
}

loc_8081F6AC:
{
}

loc_8081F6B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(22))) {
        goto loc_8081F6C4;
    }
}

loc_8081F6B4:
{
    goto loc_8081F6E4;
}

loc_8081F6B8:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8081F6E4;
}

loc_8081F6C4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8081F6E4;
}

loc_8081F6D0:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_8081F6D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(22))) {
        goto loc_8081F6E4;
    }
}

loc_8081F6DC:
{
    r0 = 10;
    MemoryInline::FlatWrite32(r30, r0);
}

loc_8081F6E4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r0 = MemoryInline::FlatRead8((r3 + 84));
}

loc_8081F6F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081F734;
    }
}

loc_8081F6F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 85));
}

loc_8081F700:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081F734;
    }
}

loc_8081F704:
{
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8081F70C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F71C;
    }
}

loc_8081F710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8081F714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F728;
    }
}

loc_8081F718:
{
    goto loc_8081F760;
}

loc_8081F71C:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8081F760;
}

loc_8081F728:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8081F760;
}

loc_8081F734:
{
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8081F73C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F74C;
    }
}

loc_8081F740:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8081F744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8081F758;
    }
}

loc_8081F748:
{
    goto loc_8081F760;
}

loc_8081F74C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8081F760;
}

loc_8081F758:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8081F760:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007B gpr_write=0xC000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081F66C func_8081F66C preserves=true fpr_mask=0x00000000
