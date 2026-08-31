#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EB078(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EB078;

loc_801EB078:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    r5 = 4;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    r30 = r3;
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -27976));
    ctx->lr = 0x801EB0A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAC68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EB0A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EB0AC;
    }
}

loc_801EB0A8:
{
    goto loc_801EB1F8;
}

loc_801EB0AC:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r0 = MemoryInline::FlatRead16(r30);
}

loc_801EB0B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EB0C4;
    }
}

loc_801EB0BC:
{
    r3 = (r3 + 13824);
    goto loc_801EB0C8;
}

loc_801EB0C4:
{
    r3 = 0;
}

loc_801EB0C8:
{
    r3 = MemoryInline::FlatRead16((r3 + 20));
}

loc_801EB0D0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(120))) {
        goto loc_801EB0DC;
    }
}

loc_801EB0D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801EB0D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EB0E4;
    }
}

loc_801EB0DC:
{
    r3 = -3;
    goto loc_801EB0F8;
}

loc_801EB0E4:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r4 = (r4_rot_1 & 33553920);
    r3 = (r1 + 8);
    r4 = (r4 + 2048);
    r5 = 0;
    ctx->lr = 0x801EB0F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EB0F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EB0FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EB104;
    }
}

loc_801EB100:
{
    goto loc_801EB140;
}

loc_801EB104:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r4 = r30;
    r5 = 512;
    r3 = (r3 + 15872);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r5 = (r1 + 8);
    r4 = 512;
    r3 = (r3 + 15872);
    ctx->lr = 0x801EB12Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB514u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EB130:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801EB13C;
    }
}

loc_801EB138:
{
    r0 = r3;
}

loc_801EB13C:
{
    r3 = r0;
}

loc_801EB140:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EB144:
{
    r31 = r3;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EB1E4;
    }
}

loc_801EB14C:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r0 = MemoryInline::FlatRead16(r30);
}

loc_801EB158:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EB164;
    }
}

loc_801EB15C:
{
    r4 = (r3 + 13824);
    goto loc_801EB168;
}

loc_801EB164:
{
    r4 = 0;
}

loc_801EB168:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r3 = (r3_rot_1 & 1048560);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r3 = (r4 + r3);
    r31 = 0;
    MemoryInline::FlatWrite32((r3 + 128), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801EB180:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
    MemoryInline::FlatWrite8((r3 + 140), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EB1E4;
    }
}

loc_801EB18C:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x801EB19Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EB1A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EB1A8;
    }
}

loc_801EB1A4:
{
    goto loc_801EB1E0;
}

loc_801EB1A8:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EB1B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EB1BC;
    }
}

loc_801EB1B4:
{
    r3 = (r3 + 13824);
    goto loc_801EB1C0;
}

loc_801EB1BC:
{
    r3 = 0;
}

loc_801EB1C0:
{
    r5 = (r1 + 8);
    r4 = 2048;
    ctx->lr = 0x801EB1CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB514u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EB1D0:
{
    r0 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EB1DC;
    }
}

loc_801EB1D8:
{
    r0 = r3;
}

loc_801EB1DC:
{
    r3 = r0;
}

loc_801EB1E0:
{
    r31 = r3;
}

loc_801EB1E4:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801EB1ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAFBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801EB1F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EB1F8;
    }
}

loc_801EB1F4:
{
    r3 = r31;
}

loc_801EB1F8:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801EB078 func_801EB078 preserves=true fpr_mask=0x00000000
