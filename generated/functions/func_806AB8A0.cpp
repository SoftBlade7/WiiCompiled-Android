#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806AB8A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806AB8A0;

loc_806AB8A0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 1752u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 116u, (r3 + 120));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB8BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ABAE0;
    }
}

loc_806AB8C0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 295u, (r3 + 299));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB8C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AB8D0;
    }
}

loc_806AB8CC:
{
    goto loc_806ABAE0;
}

loc_806AB8D0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB8D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806ABAE0;
    }
}

loc_806AB8DC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 328u, (r3 + 332));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB8E4:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_806AB8F4;
    }
}

loc_806AB8E8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 121), static_cast<uint8_t>(r0));
    goto loc_806AB918;
}

loc_806AB8F4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 329u, (r3 + 333));
}

loc_806AB8FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806AB90C;
    }
}

loc_806AB900:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 122), static_cast<uint8_t>(r0));
    goto loc_806AB918;
}

loc_806AB90C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_806AB918;
    }
}

loc_806AB910:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 121), static_cast<uint8_t>(r0));
}

loc_806AB918:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
}

loc_806AB928:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_806ABA00;
    }
}

loc_806AB92C:
{
    r5 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r5 + 15324));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & 7);
    r0 = (r4 + -5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_806AB948:
{
    MemoryInline::FlatWrite8((r3 + 124), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806AB988;
    }
}

loc_806AB950:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 328u, (r3 + 332));
    r4 = MemoryInline::FlatRead32((r5 + 15324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB95C:
{
    r3 = MemoryInline::FlatRead16((r4 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806ABAD8;
    }
}

loc_806AB968:
{
    r3 = 0x809C0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = MemoryInline::FlatRead32((r3 + 8656));
    r3 = r31;
    r4 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28));
    ctx->lr = 0x806AB984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806ABB5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806ABAD8;
}

loc_806AB988:
{
    r6 = MemoryInline::FlatRead32((r5 + 15324));
    r4 = 0x809C0000u;
    r5 = MemoryInline::ReadResolved32(guest_range_0, 1740u, (r3 + 1744));
    r6 = MemoryInline::FlatRead16((r6 + 4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1744u, (r3 + 1748));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r0 = (r0_rot_4 & 28);
    r4 = MemoryInline::FlatRead32((r4 + 8656));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r4 = (r4 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1748u, (r3 + 1752));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 172u, (r3 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB9C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AB9E8;
    }
}

loc_806AB9CC:
{
    r3 = 0x808A0000u;
    r4 = (r1 + 20);
    r3 = (r3 + -10364);
    r5 = (r31 + 1836);
    r3 = (r3 + 6114);
    ctx->lr = 0x806AB9E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806ABAD8;
}

loc_806AB9E8:
{
    r3 = 0x808A0000u;
    r4 = (r1 + 20);
    r3 = (r3 + -10364);
    r3 = (r3 + 6127);
    ctx->lr = 0x806AB9FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5AC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806ABAD8;
}

loc_806ABA00:
{
}

loc_806ABA04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(38))) {
        goto loc_806ABAA0;
    }
}

loc_806ABA08:
{
    r5 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r5 + 15324));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_5 & 7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806ABA20:
{
    MemoryInline::FlatWrite8((r3 + 124), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806ABAD8;
    }
}

loc_806ABA28:
{
    r6 = MemoryInline::FlatRead32((r5 + 15324));
    r4 = 0x809C0000u;
    r5 = MemoryInline::ReadResolved32(guest_range_0, 1740u, (r3 + 1744));
    r6 = MemoryInline::FlatRead16((r6 + 4));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1744u, (r3 + 1748));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r0 = (r0_rot_7 & 28);
    r4 = MemoryInline::FlatRead32((r4 + 8656));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = (r4 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1748u, (r3 + 1752));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 172u, (r3 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806ABA68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806ABA88;
    }
}

loc_806ABA6C:
{
    r3 = 0x808A0000u;
    r4 = (r1 + 8);
    r3 = (r3 + -10364);
    r5 = (r31 + 1836);
    r3 = (r3 + 6140);
    ctx->lr = 0x806ABA84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806ABAD8;
}

loc_806ABA88:
{
    r3 = 0x808A0000u;
    r4 = (r1 + 8);
    r3 = (r3 + -10364);
    r3 = (r3 + 6154);
    ctx->lr = 0x806ABA9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5AC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806ABAD8;
}

loc_806ABAA0:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 328u, (r3 + 332));
    r3 = MemoryInline::FlatRead32((r4 + 15324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806ABAB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_8 & 7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806ABAD8;
    }
}

loc_806ABABC:
{
    r3 = 0x809C0000u;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4 = MemoryInline::FlatRead32((r3 + 8656));
    r3 = r31;
    r4 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28));
    ctx->lr = 0x806ABAD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806ABB5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806ABAD8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 120), static_cast<uint8_t>(r0));
}

loc_806ABAE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806AB8A0 func_806AB8A0 preserves=true fpr_mask=0x00000000
