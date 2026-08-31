#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EA044(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_801EA044;

loc_801EA044:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801EA064:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801EA070;
    }
}

loc_801EA068:
{
    r31 = (r4 + 13824);
    goto loc_801EA074;
}

loc_801EA070:
{
    r31 = 0;
}

loc_801EA074:
{
    r0 = MemoryInline::FlatRead16((r31 + 20));
}

loc_801EA07C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EA100;
    }
}

loc_801EA080:
{
    r0 = MemoryInline::FlatRead16((r31 + 16));
}

loc_801EA088:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801EA100;
    }
}

loc_801EA08C:
{
    MemoryInline::FlatWrite16((r31 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(32));
}

loc_801EA098:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801EA0A4;
    }
}

loc_801EA09C:
{
    r0 = 32;
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r0));
}

loc_801EA0A4:
{
    r4 = MemoryInline::FlatRead32((r13 + -27976));
    r3 = (r1 + 8);
    r5 = 4;
    ctx->lr = 0x801EA0B4u;
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

loc_801EA0B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EA100;
    }
}

loc_801EA0BC:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x801EA0CCu;
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

loc_801EA0D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EA0F8;
    }
}

loc_801EA0D4:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA0DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EA0E8;
    }
}

loc_801EA0E0:
{
    r3 = (r3 + 13824);
    goto loc_801EA0EC;
}

loc_801EA0E8:
{
    r3 = 0;
}

loc_801EA0EC:
{
    r5 = (r1 + 8);
    r4 = 2048;
    ctx->lr = 0x801EA0F8u;
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

loc_801EA0F8:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801EA100u;
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
}

loc_801EA100:
{
    r3 = MemoryInline::FlatRead16((r31 + 20));
}

loc_801EA108:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(1))) {
        goto loc_801EA120;
    }
}

loc_801EA10C:
{
    r0 = MemoryInline::FlatRead16((r31 + 18));
}

loc_801EA114:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_801EA120;
    }
}

loc_801EA118:
{
}

loc_801EA11C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_801EA128;
    }
}

loc_801EA120:
{
    r3 = -14;
    goto loc_801EA12C;
}

loc_801EA128:
{
    r3 = 0;
}

loc_801EA12C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EA130:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EA138;
    }
}

loc_801EA134:
{
    goto loc_801EA174;
}

loc_801EA138:
{
    r5 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801EA140:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801EA14C;
    }
}

loc_801EA144:
{
    r3 = (r5 + 13824);
    goto loc_801EA150;
}

loc_801EA14C:
{
    r3 = 0;
}

loc_801EA150:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801EA154:
{
    r4 = MemoryInline::FlatRead16((r3 + 18));
    r3 = r30;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EA168;
    }
}

loc_801EA160:
{
    r5 = (r5 + 13824);
    goto loc_801EA16C;
}

loc_801EA168:
{
    r5 = 0;
}

loc_801EA16C:
{
    r5 = MemoryInline::FlatRead16((r5 + 20));
    ctx->lr = 0x801EA174u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EB210u>(ctx);
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

loc_801EA174:
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
// RECOMP_REGISTRATION base 0x801EA044 func_801EA044 preserves=true fpr_mask=0x00000000
