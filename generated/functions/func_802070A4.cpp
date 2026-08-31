#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802070A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802070A4;

loc_802070A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
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
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_802070E0;
    }
}

loc_802070D8:
{
}

loc_802070DC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(26))) {
        goto loc_802070E8;
    }
}

loc_802070E0:
{
    r31 = 0;
    goto loc_802070FC;
}

loc_802070E8:
{
    r0 = (r0 * 6272);
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r3 = (r3 + r0);
    r31 = (r3 + 72);
}

loc_802070FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80207100:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020711C;
    }
}

loc_80207104:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80207278;
}

loc_8020711C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80207124:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80207140;
    }
}

loc_80207128:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80207278;
}

loc_80207140:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80207144:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020716C;
    }
}

loc_80207148:
{
    r0 = (r29 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020714C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020716C;
    }
}

loc_80207150:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_80207278;
}

loc_8020716C:
{
    r3 = r31;
    ctx->lr = 0x80207174u;
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
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802071E4;
    }
}

loc_80207184:
{
    r3 = r31;
    ctx->lr = 0x8020718Cu;
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
    ctx->lr = 0x80207194u;
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
    ctx->lr = 0x802071A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F056Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802071AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802071D0;
    }
}

loc_802071B0:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
}

loc_802071B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802071C4;
    }
}

loc_802071BC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 5632), r0);
}

loc_802071C4:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_802071D0:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_802071E4:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802071EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802071F8;
    }
}

loc_802071F0:
{
    r3 = 0;
    goto loc_80207278;
}

loc_802071F8:
{
    r0 = MemoryInline::FlatRead32((r31 + 5576));
}

loc_80207200:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80207210;
    }
}

loc_80207204:
{
    r0 = MemoryInline::FlatRead32((r31 + 5580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020720C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80207238;
    }
}

loc_80207210:
{
    r0 = (r29 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80207214:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r30 = 1;
    r0 = 19;
    MemoryInline::FlatWriteRam32((r3 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80207238;
    }
}

loc_80207230:
{
    r3 = 19;
    goto loc_80207278;
}

loc_80207238:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80207244u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020586Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80207248:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80207274;
    }
}

loc_8020724C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80207250:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80207274;
    }
}

loc_80207254:
{
    r4 = 0x80360000u;
    r0 = (r29 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020725C:
{
    r4 = (r4 + -20912);
    r30 = 1;
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r31 + 6228), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80207274;
    }
}

loc_80207270:
{
    r30 = r3;
}

loc_80207274:
{
    r3 = r30;
}

loc_80207278:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802070A4 func_802070A4 preserves=true fpr_mask=0x00000000
