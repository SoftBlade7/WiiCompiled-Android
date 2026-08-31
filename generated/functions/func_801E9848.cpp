#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E9848(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_801E9848;

loc_801E9848:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    r30 = r3;
    ctx->lr = 0x801E9868u;
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
    r5 = r31;
    r3 = (r1 + 8);
    r6 = 1;
    ctx->lr = 0x801E987Cu;
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

loc_801E9880:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E9888;
    }
}

loc_801E9884:
{
    goto loc_801E99C8;
}

loc_801E9888:
{
    r4 = MemoryInline::FlatRead32((r13 + -24384));
    r31 = MemoryInline::FlatRead16((r1 + 8));
}

loc_801E9894:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E98A0;
    }
}

loc_801E9898:
{
    r0 = (r4 + 13824);
    goto loc_801E98A4;
}

loc_801E98A0:
{
    r0 = 0;
}

loc_801E98A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E98A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E98B4;
    }
}

loc_801E98AC:
{
    r3 = -9;
    goto loc_801E99C8;
}

loc_801E98B4:
{
}

loc_801E98B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E98C4;
    }
}

loc_801E98BC:
{
    r3 = (r4 + 13824);
    goto loc_801E98C8;
}

loc_801E98C4:
{
    r3 = 0;
}

loc_801E98C8:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801E98D0:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0))) {
        goto loc_801E98DC;
    }
}

loc_801E98D4:
{
}

loc_801E98D8:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(65535))) {
        goto loc_801E98E4;
    }
}

loc_801E98DC:
{
    r3 = -3;
    goto loc_801E9914;
}

loc_801E98E4:
{
}

loc_801E98E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801E98F4;
    }
}

loc_801E98EC:
{
    r4 = (r4 + 13824);
    goto loc_801E98F8;
}

loc_801E98F4:
{
    r4 = 0;
}

loc_801E98F8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 1048560);
    r3 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 128));
}

loc_801E990C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E9914;
    }
}

loc_801E9910:
{
    r3 = -13;
}

loc_801E9914:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E9918:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E9920;
    }
}

loc_801E991C:
{
    goto loc_801E99C8;
}

loc_801E9920:
{
    r4 = MemoryInline::FlatRead32((r13 + -27976));
    r3 = (r1 + 12);
    r5 = 10;
    ctx->lr = 0x801E9930u;
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

loc_801E9934:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E993C;
    }
}

loc_801E9938:
{
    goto loc_801E99C8;
}

loc_801E993C:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801E9944:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E9950;
    }
}

loc_801E9948:
{
    r3 = (r3 + 13824);
    goto loc_801E9954;
}

loc_801E9950:
{
    r3 = 0;
}

loc_801E9954:
{
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801E995C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(120))) {
        goto loc_801E9968;
    }
}

loc_801E9960:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_801E9964:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E9970;
    }
}

loc_801E9968:
{
    r3 = -3;
    goto loc_801E9984;
}

loc_801E9970:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(9));
    r4 = (r4_rot_1 & 33553920);
    r3 = (r1 + 12);
    r4 = (r4 + 2048);
    r5 = 0;
    ctx->lr = 0x801E9984u;
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

loc_801E9984:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E9988:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E9994;
    }
}

loc_801E998C:
{
    r31 = r3;
    goto loc_801E99B4;
}

loc_801E9994:
{
    r3 = r30;
    r5 = (r1 + 12);
    r4 = 512;
    ctx->lr = 0x801E99A4u;
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

loc_801E99A8:
{
    r31 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E99B4;
    }
}

loc_801E99B0:
{
    r31 = r3;
}

loc_801E99B4:
{
    r3 = (r1 + 12);
    ctx->lr = 0x801E99BCu;
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

loc_801E99C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E99C8;
    }
}

loc_801E99C4:
{
    r3 = r31;
}

loc_801E99C8:
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
// RECOMP_REGISTRATION base 0x801E9848 func_801E9848 preserves=true fpr_mask=0x00000000
