#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FC6BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FC6BC;

loc_801FC6BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC6C8:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC6EC;
    }
}

loc_801FC6E4:
{
    r3 = 10;
    goto loc_801FC8E4;
}

loc_801FC6EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_801FC6F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FC710;
    }
}

loc_801FC6F8:
{
}

loc_801FC6FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801FC710;
    }
}

loc_801FC700:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801FC704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC710;
    }
}

loc_801FC708:
{
    r3 = 15;
    goto loc_801FC8E4;
}

loc_801FC710:
{
    r0 = MemoryInline::FlatRead16((r3 + 6244));
    r0 = (r0 & 4);
}

loc_801FC718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FC738;
    }
}

loc_801FC71C:
{
    r5 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r5 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FC728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC738;
    }
}

loc_801FC72C:
{
    MemoryInline::FlatWrite32(r4, r5);
    r3 = 0;
    goto loc_801FC8E4;
}

loc_801FC738:
{
    r0 = -1;
    r31 = 2;
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead16((r3 + 6244));
    r0 = (r0 & 1);
}

loc_801FC74C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FC778;
    }
}

loc_801FC750:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801FC758:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC778;
    }
}

loc_801FC75C:
{
    r3 = r29;
    ctx->lr = 0x801FC764u;
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
    InvokeDirectCpu<0x801EFEA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC768:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC770;
    }
}

loc_801FC76C:
{
    goto loc_801FC8E4;
}

loc_801FC770:
{
    r0 = MemoryInline::FlatRead32((r29 + 56));
    MemoryInline::FlatWrite32(r30, r0);
}

loc_801FC778:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801FC784:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC8D4;
    }
}

loc_801FC788:
{
    r3 = r29;
    r4 = (r1 + 8);
    r5 = 2;
    ctx->lr = 0x801FC798u;
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
    InvokeDirectCpu<0x801FA844u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC79C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC7A4;
    }
}

loc_801FC7A0:
{
    goto loc_801FC8E4;
}

loc_801FC7A4:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_801FC854;
}

loc_801FC7B8:
{
    r0 = MemoryInline::FlatRead32((r29 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801FC7C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC7F8;
    }
}

loc_801FC7C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FC7D4;
    }
}

loc_801FC7C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FC7CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FC7E0;
    }
}

loc_801FC7D0:
{
    goto loc_801FC828;
}

loc_801FC7D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801FC7D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FC828;
    }
}

loc_801FC7DC:
{
    goto loc_801FC810;
}

loc_801FC7E0:
{
    r3 = r29;
    r4 = (r31 & 65535);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x801FC7F4u;
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
    InvokeDirectCpu<0x801FD940u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FC82C;
}

loc_801FC7F8:
{
    r3 = r29;
    r4 = r31;
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x801FC80Cu;
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
    InvokeDirectCpu<0x801FE3F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FC82C;
}

loc_801FC810:
{
    r3 = r29;
    r4 = r31;
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x801FC824u;
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
    InvokeDirectCpu<0x801FE994u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801FC82C;
}

loc_801FC828:
{
    r3 = 15;
}

loc_801FC82C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC830:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC838;
    }
}

loc_801FC834:
{
    goto loc_801FC8E4;
}

loc_801FC838:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_801FC840:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801FC850;
    }
}

loc_801FC844:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_801FC850:
{
    r31 = (r31 + 1);
}

loc_801FC854:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
}

loc_801FC858:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FC86C;
    }
}

loc_801FC85C:
{
    r3 = MemoryInline::FlatRead32((r29 + 52));
    r0 = (r3 + 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_801FC868:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FC7B8;
    }
}

loc_801FC86C:
{
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r0 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_801FC878:
{
    MemoryInline::FlatWrite32((r29 + 56), r0);
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801FC8D4;
    }
}

loc_801FC880:
{
    r0 = MemoryInline::FlatRead16((r29 + 6244));
    r3 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC888:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC8D4;
    }
}

loc_801FC88C:
{
    r3 = 0;
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801FC89C;
    }
}

loc_801FC894:
{
    r3 = 12;
    goto loc_801FC8B8;
}

loc_801FC89C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC8A8;
    }
}

loc_801FC8A0:
{
    r3 = 36;
    goto loc_801FC8B8;
}

loc_801FC8A8:
{
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FC8AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC8B8;
    }
}

loc_801FC8B0:
{
    r3 = r29;
    ctx->lr = 0x801FC8B8u;
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
    InvokeDirectCpu<0x801F0064u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801FC8B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC8BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC8D4;
    }
}

loc_801FC8C0:
{
    r0 = MemoryInline::FlatRead16((r29 + 6244));
    r3 = -1;
    MemoryInline::FlatWrite32((r29 + 56), r3);
    r0 = (r0 & -5);
    MemoryInline::FlatWrite16((r29 + 6244), static_cast<uint16_t>(r0));
}

loc_801FC8D4:
{
    r0 = MemoryInline::FlatRead16((r29 + 6244));
    r3 = 0;
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r29 + 6244), static_cast<uint16_t>(r0));
}

loc_801FC8E4:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FC6BC func_801FC6BC preserves=true fpr_mask=0x00000000
