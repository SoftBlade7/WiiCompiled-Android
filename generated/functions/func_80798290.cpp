#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80798290(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r0_subfc_min_4 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80798290;

loc_80798290:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = -208;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 20864);
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807982D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807982E4;
    }
}

loc_807982D4:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    goto loc_807982FC;
}

loc_807982E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807982EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807982FC;
    }
}

loc_807982F0:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_807982FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80798304:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80798318;
    }
}

loc_80798308:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    goto loc_80798330;
}

loc_80798318:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80798320:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80798330;
    }
}

loc_80798324:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_80798330:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 & 8192);
}

loc_80798338:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807983F0;
    }
}

loc_8079833C:
{
    r3 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_80798350:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8079835C;
    }
}

loc_80798354:
{
    r0 = 0;
    goto loc_807983DC;
}

loc_8079835C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 & 1);
}

loc_8079836C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80798378;
    }
}

loc_80798370:
{
    r0 = 0;
    goto loc_807983DC;
}

loc_80798378:
{
    r0 = (r3 & 262144);
}

loc_8079837C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80798388;
    }
}

loc_80798380:
{
    r0 = 0;
    goto loc_807983DC;
}

loc_80798388:
{
    r0 = MemoryInline::FlatRead32((r31 + 200));
}

loc_80798390:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_807983A4;
    }
}

loc_80798394:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    goto loc_807983D8;
}

loc_807983A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 140));
}

loc_807983AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_807983C0;
    }
}

loc_807983B0:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    goto loc_807983D8;
}

loc_807983C0:
{
    r0 = MemoryInline::FlatRead32((r31 + 88));
}

loc_807983C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807983D8;
    }
}

loc_807983CC:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_807983D8:
{
    r0 = 1;
}

loc_807983DC:
{
}

loc_807983E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807983F0;
    }
}

loc_807983E4:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_807983F0:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807983F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807984C4;
    }
}

loc_807983FC:
{
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r3 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80798404:
{
    r0 = (r3 & -257);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807984C4;
    }
}

loc_80798410:
{
    r3 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_3 = r0;
    r0 = (r0_subfc_min_3 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_3) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_3 = r3;
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_3);
    r3 = (r3 + r3_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_80798424:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80798430;
    }
}

loc_80798428:
{
    r0 = 0;
    goto loc_807984B0;
}

loc_80798430:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 & 1);
}

loc_80798440:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079844C;
    }
}

loc_80798444:
{
    r0 = 0;
    goto loc_807984B0;
}

loc_8079844C:
{
    r0 = (r3 & 262144);
}

loc_80798450:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079845C;
    }
}

loc_80798454:
{
    r0 = 0;
    goto loc_807984B0;
}

loc_8079845C:
{
    r0 = MemoryInline::FlatRead32((r31 + 200));
}

loc_80798464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80798478;
    }
}

loc_80798468:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    goto loc_807984AC;
}

loc_80798478:
{
    r0 = MemoryInline::FlatRead32((r31 + 140));
}

loc_80798480:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_80798494;
    }
}

loc_80798484:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    goto loc_807984AC;
}

loc_80798494:
{
    r0 = MemoryInline::FlatRead32((r31 + 88));
}

loc_8079849C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807984AC;
    }
}

loc_807984A0:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_807984AC:
{
    r0 = 1;
}

loc_807984B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807984B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807984C4;
    }
}

loc_807984B8:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_807984C4:
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80798290 func_80798290 preserves=true fpr_mask=0x00000000
