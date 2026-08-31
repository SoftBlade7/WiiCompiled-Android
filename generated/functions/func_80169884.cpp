#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80169884(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80169884;

loc_80169884:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    ctx->lr = 0x801698A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80169360u>(ctx);
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

loc_801698AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801698B0:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 16908288;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801698BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801698C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80169954;
    }
}

loc_801698C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_801698C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801698CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80169920;
    }
}

loc_801698D0:
{
    r3 = 0x80000000u;
    r0 = (r3 + 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801698DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801698E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80169904;
    }
}

loc_801698E4:
{
    r0 = (r3 + 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801698EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801698F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801699F8;
    }
}

loc_801698F4:
{
    r0 = (r3 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801698FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_80169900:
{
    goto loc_801699F8;
}

loc_80169904:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80169908:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_8016990C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801699F8;
    }
}

loc_80169910:
{
    r0 = (r3 + 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80169918:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_8016991C:
{
    goto loc_801699F8;
}

loc_80169920:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_80169924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_80169928:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80169944;
    }
}

loc_8016992C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(16));
}

loc_80169930:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_80169934:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801699F8;
    }
}

loc_80169938:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(8));
}

loc_8016993C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_80169940:
{
    goto loc_801699F8;
}

loc_80169944:
{
    r0 = 16842752;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8016994C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_80169950:
{
    goto loc_801699F8;
}

loc_80169954:
{
    r3 = 67371008;
    r0 = (r3 + 1028);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80169960:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_80169964:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801699BC;
    }
}

loc_80169968:
{
    r3 = 67239936;
    r0 = (r3 + 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80169974:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_80169978:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016999C;
    }
}

loc_8016997C:
{
    r0 = 50397184;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80169984:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_80169988:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801699F8;
    }
}

loc_8016998C:
{
    r0 = 33685504;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80169994:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_80169998:
{
    goto loc_801699F8;
}

loc_8016999C:
{
    r0 = (r3 + 768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801699A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801699A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801699F8;
    }
}

loc_801699AC:
{
    r0 = (r3 + 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801699B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801699B8:
{
    goto loc_801699F8;
}

loc_801699BC:
{
    r0 = 68354048;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801699C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801699C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801699EC;
    }
}

loc_801699CC:
{
    r0 = 68288512;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801699D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801699D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801699F8;
    }
}

loc_801699DC:
{
    r0 = 67502080;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801699E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801699E8:
{
    goto loc_801699F8;
}

loc_801699EC:
{
    r0 = 69337088;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_801699F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_801699F8:
{
    r3 = r30;
    r4 = r31;
    r5 = (r1 + 8);
    ctx->lr = 0x80169A08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016970Cu>(ctx);
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

loc_80169A0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80169A28;
    }
}

loc_80169A10:
{
    r3 = -1510014976;
    MemoryInline::FlatWrite32((r13 + -25748), r30);
    r0 = (r3 + 90);
    MemoryInline::FlatWrite32((r13 + -25752), r31);
    MemoryInline::FlatWrite32((r13 + -25756), r0);
    MemoryInline::FlatWrite32((r13 + -25760), r0);
}

loc_80169A28:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
// RECOMP_REGISTRATION base 0x80169884 func_80169884 preserves=true fpr_mask=0x00000000
