#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80083440(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80083440;

loc_80083440:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r4 = 1380712448;
    MemoryInline::FlatWrite32(r3, r0);
    r4 = (r4 + 16718);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = r30;
    // inline leaf 0x80084340 (10 guest instruction(s))
}

loc_inl0_0x80084340:
{
    r0 = MemoryInline::FlatRead32(r3);
    r5 = 0;
}

loc_inl0_0x8008434C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x80084360;
    }
}

loc_inl0_0x80084350:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl0_0x80084358:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_inl0_0x80084360;
    }
}

loc_inl0_0x8008435C:
{
    r5 = 1;
}

loc_inl0_0x80084360:
{
    r3 = r5;
}

loc_inl0_cont_80084340:
{
    // end of inlined leaf 0x80084340
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80083484:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008352C;
    }
}

loc_80083488:
{
    r3 = MemoryInline::FlatRead16((r30 + 6));
    r4 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
}

loc_80083494:
{
    r3 = (r3 & 255);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800834BC;
    }
}

loc_8008349C:
{
    r0 = (r3 + -8);
    r3 = 0;
}

loc_800834A8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_800834B0;
    }
}

loc_800834AC:
{
    r3 = 1;
}

loc_800834B0:
{
}

loc_800834B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800834BC;
    }
}

loc_800834B8:
{
    r4 = 1;
}

loc_800834BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800834C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008352C;
    }
}

loc_800834C4:
{
    MemoryInline::FlatWrite32(r31, r30);
    r5 = 0;
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r4 = (r30 + r0);
    goto loc_8008351C;
}

loc_800834D8:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -1885405184);
}

loc_800834E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(29745))) {
        goto loc_800834FC;
    }
}

loc_800834E8:
{
}

loc_800834EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(26673))) {
        goto loc_80083504;
    }
}

loc_800834F0:
{
}

loc_800834F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(26929))) {
        goto loc_8008350C;
    }
}

loc_800834F8:
{
    goto loc_80083510;
}

loc_800834FC:
{
    MemoryInline::FlatWrite32((r31 + 8), r4);
    goto loc_80083510;
}

loc_80083504:
{
    MemoryInline::FlatWrite32((r31 + 12), r4);
    goto loc_80083510;
}

loc_8008350C:
{
    MemoryInline::FlatWrite32((r31 + 4), r4);
}

loc_80083510:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r5 + 1);
    r4 = (r4 + r0);
}

loc_8008351C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r3 + 14));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80083528:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800834D8;
    }
}

loc_8008352C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80083440 func_80083440 preserves=true fpr_mask=0x00000000
