#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BBFB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800BBFB0;

loc_800BBFB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BBFC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC128;
    }
}

loc_800BBFC8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BBFD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BBFDC;
    }
}

loc_800BBFD4:
{
    r0 = MemoryInline::FlatRead32((r13 + -32292));
    goto loc_800BC034;
}

loc_800BBFDC:
{
    ctx->lr = 0x800BBFE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800BBFE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BBFF0;
    }
}

loc_800BBFE8:
{
    r0 = 6;
    goto loc_800BC034;
}

loc_800BBFF0:
{
    r5 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = (r13 + -26976);
}

loc_800BBFFC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800BC004;
    }
}

loc_800BC000:
{
    r3 = (r5 + 6972);
}

loc_800BC004:
{
    r4 = MemoryInline::FlatRead8(r3);
    r3 = 1;
    r0 = (r4 & 4);
}

loc_800BC010:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC020;
    }
}

loc_800BC014:
{
    r0 = (r4 & 8);
}

loc_800BC018:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC020;
    }
}

loc_800BC01C:
{
    r3 = 0;
}

loc_800BC020:
{
}

loc_800BC024:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC030;
    }
}

loc_800BC028:
{
    r0 = 5;
    goto loc_800BC034;
}

loc_800BC030:
{
    r0 = MemoryInline::FlatRead32((r5 + 6976));
}

loc_800BC034:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_800BC040:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800BBFC8;
    }
}

loc_800BC044:
{
    r0 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BC050:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BC05C;
    }
}

loc_800BC054:
{
    r0 = MemoryInline::FlatRead32((r13 + -32292));
    goto loc_800BC0B4;
}

loc_800BC05C:
{
    ctx->lr = 0x800BC060u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800BC064:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC070;
    }
}

loc_800BC068:
{
    r0 = 6;
    goto loc_800BC0B4;
}

loc_800BC070:
{
    r5 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = (r13 + -26976);
}

loc_800BC07C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800BC084;
    }
}

loc_800BC080:
{
    r3 = (r5 + 6972);
}

loc_800BC084:
{
    r4 = MemoryInline::FlatRead8(r3);
    r3 = 1;
    r0 = (r4 & 4);
}

loc_800BC090:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC0A0;
    }
}

loc_800BC094:
{
    r0 = (r4 & 8);
}

loc_800BC098:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC0A0;
    }
}

loc_800BC09C:
{
    r3 = 0;
}

loc_800BC0A0:
{
}

loc_800BC0A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC0B0;
    }
}

loc_800BC0A8:
{
    r0 = 5;
    goto loc_800BC0B4;
}

loc_800BC0B0:
{
    r0 = MemoryInline::FlatRead32((r5 + 6976));
}

loc_800BC0B4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    MemoryInline::FlatWrite32((r13 + -32292), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800BC0C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC0D8;
    }
}

loc_800BC0C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC0D0;
    }
}

loc_800BC0C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 6984));
    goto loc_800BC0DC;
}

loc_800BC0D0:
{
    r0 = 0;
    goto loc_800BC0DC;
}

loc_800BC0D8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26980));
}

loc_800BC0DC:
{
    MemoryInline::FlatWrite32((r13 + -26980), r0);
    r0 = MemoryInline::FlatRead8((r3 + 6972));
    MemoryInline::FlatWrite8((r13 + -26976), static_cast<uint8_t>(r0));
    ctx->lr = 0x800BC0ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800BC0F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC0F8;
    }
}

loc_800BC0F4:
{
    ctx->lr = 0x800BC0F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD6D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
}

loc_800BC0F8:
{
    ctx->lr = 0x800BC0FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD810u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    ctx->lr = 0x800BC108u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80198D58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->lr = 0x800BC114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80198D58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x800BC120u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80198D58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -26984), r0);
}

loc_800BC128:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800BBFB0 func_800BBFB0 preserves=true fpr_mask=0x00000000
