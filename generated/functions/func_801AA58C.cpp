#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AA58C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AA58C;

loc_801AA58C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = MemoryInline::FlatRead32((r29 + 716));
    r31 = r3;
    r0 = (r30 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AA5B8:
{
    MemoryInline::FlatWrite32((r29 + 716), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AA5CC;
    }
}

loc_801AA5C0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 716), r0);
    goto loc_801AA7FC;
}

loc_801AA5CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AA7FC;
    }
}

loc_801AA5D0:
{
    r0 = MemoryInline::FlatRead16((r29 + 712));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_801AA5D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA688;
    }
}

loc_801AA5DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AA7E8;
    }
}

loc_801AA5E0:
{
}

loc_801AA5E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AA5EC;
    }
}

loc_801AA5E8:
{
    goto loc_801AA7E8;
}

loc_801AA5EC:
{
    r5 = MemoryInline::FlatRead32((r29 + 724));
    r4 = MemoryInline::FlatRead32((r29 + 756));
    goto loc_801AA618;
}

loc_801AA5F8:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_801AA600:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801AA614;
    }
}

loc_801AA604:
{
    r0 = MemoryInline::FlatRead32((r3 + 720));
}

loc_801AA60C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_801AA614;
    }
}

loc_801AA610:
{
    r5 = r0;
}

loc_801AA614:
{
    r4 = MemoryInline::FlatRead32((r4 + 16));
}

loc_801AA618:
{
}

loc_801AA61C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AA5F8;
    }
}

loc_801AA620:
{
    r3 = 0x80340000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + 30640);
    MemoryInline::FlatWrite32((r29 + 720), r5);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 732), r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801AA640:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AA64C;
    }
}

loc_801AA644:
{
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_801AA650;
}

loc_801AA64C:
{
    MemoryInline::FlatWrite32((r4 + 736), r29);
}

loc_801AA650:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 740), r4);
    r4 = MemoryInline::FlatRead32((r29 + 732));
    r3 = 1;
    MemoryInline::FlatWrite32((r29 + 736), r0);
    MemoryInline::FlatWrite32((r4 + 4), r29);
    r0 = MemoryInline::FlatRead32((r29 + 720));
    r4 = MemoryInline::FlatRead32((r13 + -25312));
    r0_subfic_ra_1 = r0;
    r0 = (31 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r13 + -25312), r0);
    MemoryInline::FlatWrite32((r13 + -25316), r3);
    goto loc_801AA7E8;
}

loc_801AA688:
{
    r4 = MemoryInline::FlatRead32((r29 + 736));
    r5 = MemoryInline::FlatRead32((r29 + 740));
}

loc_801AA694:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AA6A4;
    }
}

loc_801AA698:
{
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    goto loc_801AA6A8;
}

loc_801AA6A4:
{
    MemoryInline::FlatWrite32((r4 + 740), r5);
}

loc_801AA6A8:
{
}

loc_801AA6AC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801AA6BC;
    }
}

loc_801AA6B0:
{
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32(r3, r4);
    goto loc_801AA6C0;
}

loc_801AA6BC:
{
    MemoryInline::FlatWrite32((r5 + 736), r4);
}

loc_801AA6C0:
{
    r0 = MemoryInline::FlatRead32((r29 + 724));
    r4 = MemoryInline::FlatRead32((r29 + 756));
    goto loc_801AA6EC;
}

loc_801AA6CC:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_801AA6D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801AA6E8;
    }
}

loc_801AA6D8:
{
    r3 = MemoryInline::FlatRead32((r3 + 720));
}

loc_801AA6E0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_801AA6E8;
    }
}

loc_801AA6E4:
{
    r0 = r3;
}

loc_801AA6E8:
{
    r4 = MemoryInline::FlatRead32((r4 + 16));
}

loc_801AA6EC:
{
}

loc_801AA6F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801AA6CC;
    }
}

loc_801AA6F4:
{
    MemoryInline::FlatWrite32((r29 + 720), r0);
    r4 = MemoryInline::FlatRead32((r29 + 732));
    r5 = MemoryInline::FlatRead32(r4);
    goto loc_801AA708;
}

loc_801AA704:
{
    r5 = MemoryInline::FlatRead32((r5 + 736));
}

loc_801AA708:
{
}

loc_801AA70C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801AA720;
    }
}

loc_801AA710:
{
    r3 = MemoryInline::FlatRead32((r5 + 720));
    r0 = MemoryInline::FlatRead32((r29 + 720));
}

loc_801AA71C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_801AA704;
    }
}

loc_801AA720:
{
}

loc_801AA724:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801AA758;
    }
}

loc_801AA728:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
}

loc_801AA730:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AA73C;
    }
}

loc_801AA734:
{
    MemoryInline::FlatWrite32(r4, r29);
    goto loc_801AA740;
}

loc_801AA73C:
{
    MemoryInline::FlatWrite32((r3 + 736), r29);
}

loc_801AA740:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 740), r3);
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32((r29 + 736), r0);
    MemoryInline::FlatWrite32((r3 + 4), r29);
    goto loc_801AA780;
}

loc_801AA758:
{
    MemoryInline::FlatWrite32((r29 + 736), r5);
    r3 = MemoryInline::FlatRead32((r5 + 740));
    MemoryInline::FlatWrite32((r5 + 740), r29);
}

loc_801AA768:
{
    MemoryInline::FlatWrite32((r29 + 740), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AA77C;
    }
}

loc_801AA770:
{
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_801AA780;
}

loc_801AA77C:
{
    MemoryInline::FlatWrite32((r3 + 736), r29);
}

loc_801AA780:
{
    r3 = MemoryInline::FlatRead32((r29 + 752));
}

loc_801AA788:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801AA7E8;
    }
}

loc_801AA78C:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_801AA790:
{
    r0 = MemoryInline::FlatRead32((r3 + 716));
}

loc_801AA798:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801AA7E8;
    }
}

loc_801AA79C:
{
    r4 = MemoryInline::FlatRead32((r3 + 724));
    r5 = MemoryInline::FlatRead32((r3 + 756));
    goto loc_801AA7C8;
}

loc_801AA7A8:
{
    r6 = MemoryInline::FlatRead32(r5);
}

loc_801AA7B0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801AA7C4;
    }
}

loc_801AA7B4:
{
    r0 = MemoryInline::FlatRead32((r6 + 720));
}

loc_801AA7BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_801AA7C4;
    }
}

loc_801AA7C0:
{
    r4 = r0;
}

loc_801AA7C4:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
}

loc_801AA7C8:
{
}

loc_801AA7CC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801AA7A8;
    }
}

loc_801AA7D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 720));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_801AA7D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA7E8;
    }
}

loc_801AA7DC:
{
    ctx->lr = 0x801AA7E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A9A04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AA7E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AA790;
    }
}

loc_801AA7E8:
{
    r0 = MemoryInline::FlatRead32((r13 + -25316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AA7F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AA7FC;
    }
}

loc_801AA7F4:
{
    r3 = 0;
    ctx->lr = 0x801AA7FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A9C08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AA7FC:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AA58C func_801AA58C preserves=true fpr_mask=0x00000000
