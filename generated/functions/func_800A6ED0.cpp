#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A6ED0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800A6ED0;

loc_800A6ED0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 2092u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 285u, (r3 + 285));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A6EF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A706C;
    }
}

loc_800A6EF8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 288u, (r3 + 288));
}

loc_800A6F00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A6F24;
    }
}

loc_800A6F04:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 289u, (r3 + 289));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A6F0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A6F24;
    }
}

loc_800A6F10:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800A6F20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800A706C;
}

loc_800A6F24:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 286u, (r3 + 286));
}

loc_800A6F2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A6F80;
    }
}

loc_800A6F30:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 2088u, (r3 + 2088));
    r4 = (r3 + 2932);
    ctr = r0;
}

loc_800A6F40:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800A6F80;
    }
}

loc_800A6F44:
{
    // nop
}

loc_800A6F48:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_800A6F50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A6F78;
    }
}

loc_800A6F54:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A6F5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A6F78;
    }
}

loc_800A6F60:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800A6F74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800A706C;
}

loc_800A6F78:
{
    r4 = (r4 + 56);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A6F48;
    }
}

loc_800A6F80:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 293u, (r3 + 293));
}

loc_800A6F88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A702C;
    }
}

loc_800A6F8C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 400u, (r3 + 400));
}

loc_800A6F94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A702C;
    }
}

loc_800A6F98:
{
    r29 = MemoryInline::ReadResolved32(guest_range_0, 2084u, (r3 + 2084));
    r30 = (r13 + -27056);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800A6FA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A6FEC;
    }
}

loc_800A6FA8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x800A6FBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800A6FD4;
}

loc_800A6FC0:
{
}

loc_800A6FC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_800A6FD0;
    }
}

loc_800A6FC8:
{
    r0 = 1;
    goto loc_800A6FE0;
}

loc_800A6FD0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_800A6FD4:
{
}

loc_800A6FD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A6FC0;
    }
}

loc_800A6FDC:
{
    r0 = 0;
}

loc_800A6FE0:
{
}

loc_800A6FE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A6FEC;
    }
}

loc_800A6FE8:
{
    goto loc_800A6FF0;
}

loc_800A6FEC:
{
    r29 = 0;
}

loc_800A6FF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800A6FF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A7000;
    }
}

loc_800A6FF8:
{
    r0 = 0;
    goto loc_800A7014;
}

loc_800A7000:
{
    ctx->lr = 0x800A7004u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80162B50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 ^ 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_800A7014:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A7018:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A702C;
    }
}

loc_800A701C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 293), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x800A702Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A7D40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_800A702C:
{
    r0 = MemoryInline::FlatRead8((r31 + 290));
}

loc_800A7034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A7040;
    }
}

loc_800A7038:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 290), static_cast<uint8_t>(r0));
}

loc_800A7040:
{
    r29 = (r31 + 2932);
    r30 = 0;
    goto loc_800A7060;
}

loc_800A704C:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x800A7058u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A7090u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r29 + 56);
    r30 = (r30 + 1);
}

loc_800A7060:
{
    r0 = MemoryInline::FlatRead32((r31 + 2088));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_800A7068:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A704C;
    }
}

loc_800A706C:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800A6ED0 func_800A6ED0 preserves=true fpr_mask=0x00000000
