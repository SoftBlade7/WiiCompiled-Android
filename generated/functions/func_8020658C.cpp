#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020658C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020658C;

loc_8020658C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    // inline leaf 0x801EF3C0 (6 guest instruction(s))
}

loc_inl0_0x801EF3C0:
{
}

loc_inl0_0x801EF3C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(97))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801EF3C8:
{
}

loc_inl0_0x801EF3CC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(122))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801EF3D0:
{
    r3 = (r3 + -32);
    goto loc_inl0_cont_801EF3C0;
}

loc_inl0_return:
{
}

loc_inl0_cont_801EF3C0:
{
    // end of inlined leaf 0x801EF3C0
    r0 = (r3 + -65);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802065C0;
    }
}

loc_802065B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_802065BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802065C8;
    }
}

loc_802065C0:
{
    r31 = 0;
    goto loc_802065DC;
}

loc_802065C8:
{
    r0 = (r0 * 6272);
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r3 = (r3 + r0);
    r31 = (r3 + 72);
}

loc_802065DC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_802065E0:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_802065FC;
    }
}

loc_802065E4:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80206814;
}

loc_802065FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80206600:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206620;
    }
}

loc_80206604:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_80206814;
}

loc_80206620:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8020662C;
    }
}

loc_80206624:
{
    r3 = 10;
    goto loc_802067B4;
}

loc_8020662C:
{
    r3 = r31;
    ctx->lr = 0x80206634u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F0218u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206638:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206708;
    }
}

loc_8020663C:
{
    r3 = r31;
    ctx->lr = 0x80206644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F0244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80206648:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80206790;
    }
}

loc_8020664C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206654:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802066B8;
    }
}

loc_80206658:
{
    r3 = r31;
    ctx->lr = 0x80206660u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80201328u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x80206668u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6188u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x8020667Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F056Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80206680:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802066A4;
    }
}

loc_80206684:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
}

loc_8020668C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80206698;
    }
}

loc_80206690:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 5632), r0);
}

loc_80206698:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_802066A4:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_802066B8:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802066C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802066F8;
    }
}

loc_802066C4:
{
    r3 = r31;
    ctx->lr = 0x802066CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80205758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802066D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802066D8;
    }
}

loc_802066D4:
{
    goto loc_802066FC;
}

loc_802066D8:
{
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r0 = (r0 & 65528);
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_802066F8:
{
    r3 = 0;
}

loc_802066FC:
{
}

loc_80206700:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80206790;
    }
}

loc_80206704:
{
    goto loc_80206794;
}

loc_80206708:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206710:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206790;
    }
}

loc_80206714:
{
    r3 = r31;
    ctx->lr = 0x8020671Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F0244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206784;
    }
}

loc_80206724:
{
    r3 = r31;
    ctx->lr = 0x8020672Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80201328u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x80206734u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6188u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80206748u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F056Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8020674C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80206770;
    }
}

loc_80206750:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
}

loc_80206758:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80206764;
    }
}

loc_8020675C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 5632), r0);
}

loc_80206764:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_80206770:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80206784:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_80206790:
{
    r3 = 0;
}

loc_80206794:
{
}

loc_80206798:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802067A0;
    }
}

loc_8020679C:
{
    goto loc_802067B4;
}

loc_802067A0:
{
    r3 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = 9;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 1);
    r3 = (0 - r3);
    r3 = (r0 & ~r3);
}

loc_802067B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802067B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802067D0;
    }
}

loc_802067BC:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r31 + 6228), r3);
    goto loc_80206814;
}

loc_802067D0:
{
    r0 = MemoryInline::FlatRead16(r31);
    r3 = r31;
    r4 = (r30 + 4);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    r0 = MemoryInline::FlatRead8((r31 + 6));
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r0 = MemoryInline::FlatRead32((r31 + 52));
    MemoryInline::FlatWrite32(r30, r0);
    ctx->lr = 0x802067F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FC6BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802067F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80206810;
    }
}

loc_802067FC:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r31 + 6228), r3);
    goto loc_80206814;
}

loc_80206810:
{
    r3 = 0;
}

loc_80206814:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020658C func_8020658C preserves=true fpr_mask=0x00000000
