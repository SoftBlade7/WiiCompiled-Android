#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E96B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E96B4;

loc_801E96B4:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    r30 = r3;
    ctx->lr = 0x801E96D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DC7BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = r3;
    r3 = (r1 + 8);
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x801E96E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EB900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E96E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E96F0;
    }
}

loc_801E96EC:
{
    goto loc_801E9830;
}

loc_801E96F0:
{
    r4 = MemoryInline::FlatRead32((r13 + -24384));
    r31 = MemoryInline::FlatRead16((r1 + 8));
}

loc_801E96FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E9708;
    }
}

loc_801E9700:
{
    r0 = (r4 + 13824);
    goto loc_801E970C;
}

loc_801E9708:
{
    r0 = 0;
}

loc_801E970C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E9710:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E971C;
    }
}

loc_801E9714:
{
    r3 = -9;
    goto loc_801E9830;
}

loc_801E971C:
{
}

loc_801E9720:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E972C;
    }
}

loc_801E9724:
{
    r3 = (r4 + 13824);
    goto loc_801E9730;
}

loc_801E972C:
{
    r3 = 0;
}

loc_801E9730:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801E9738:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0))) {
        goto loc_801E9744;
    }
}

loc_801E973C:
{
}

loc_801E9740:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(65535))) {
        goto loc_801E974C;
    }
}

loc_801E9744:
{
    r3 = -3;
    goto loc_801E977C;
}

loc_801E974C:
{
}

loc_801E9750:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E975C;
    }
}

loc_801E9754:
{
    r4 = (r4 + 13824);
    goto loc_801E9760;
}

loc_801E975C:
{
    r4 = 0;
}

loc_801E9760:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 1048560);
    r3 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_801E9774:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E977C;
    }
}

loc_801E9778:
{
    r3 = -13;
}

loc_801E977C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E9780:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E9788;
    }
}

loc_801E9784:
{
    goto loc_801E9830;
}

loc_801E9788:
{
    r4 = MemoryInline::FlatRead32((r13 + -27976));
    r3 = (r1 + 12);
    r5 = 10;
    ctx->lr = 0x801E9798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAC68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E979C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E97A4;
    }
}

loc_801E97A0:
{
    goto loc_801E9830;
}

loc_801E97A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801E97AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E97B8;
    }
}

loc_801E97B0:
{
    r3 = (r3 + 13824);
    goto loc_801E97BC;
}

loc_801E97B8:
{
    r3 = 0;
}

loc_801E97BC:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801E97C4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(120))) {
        goto loc_801E97D0;
    }
}

loc_801E97C8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_801E97CC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E97D8;
    }
}

loc_801E97D0:
{
    r3 = -3;
    goto loc_801E97EC;
}

loc_801E97D8:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(9));
    r4 = (r4_rot_1 & 33553920);
    r3 = (r1 + 12);
    r4 = (r4 + 2048);
    r5 = 0;
    ctx->lr = 0x801E97ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801E97EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E97F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E97FC;
    }
}

loc_801E97F4:
{
    r31 = r3;
    goto loc_801E981C;
}

loc_801E97FC:
{
    r3 = r30;
    r5 = (r1 + 12);
    r4 = 512;
    ctx->lr = 0x801E980Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E9810:
{
    r31 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E981C;
    }
}

loc_801E9818:
{
    r31 = r3;
}

loc_801E981C:
{
    r3 = (r1 + 12);
    ctx->lr = 0x801E9824u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAFBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801E9828:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E9830;
    }
}

loc_801E982C:
{
    r3 = r31;
}

loc_801E9830:
{
    r0 = MemoryInline::FlatRead32((r1 + 180));
    r31 = MemoryInline::FlatRead32((r1 + 172));
    r30 = MemoryInline::FlatRead32((r1 + 168));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E96B4 func_801E96B4 preserves=true fpr_mask=0x00000000
